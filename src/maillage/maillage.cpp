//
// Created by benoit on 13/10/2019.
//

#include <iostream>
#include <util.h>
#include "maillage.h"

void Maillage::addSommet() {
    Coords c;
    c.saisir();
    m_sommets.push_back(new Sommet(c));
}

void Maillage::displaySommets() {
    for(size_t i = 0 ; i < m_sommets.size() ; i++)
    {
        std::cout << i << ":";
        m_sommets[i]->display();
        std::cout << std::endl;
    }
}

bool Maillage::addTriangle() {
    std::cout << "Saisir 3 indices sommets : ";
    size_t x, y, z;
    std::cin >> x >> y >> z;
    if(x  >= 0 && y >= 0 && z >= 0 && x < m_sommets.size() && y < m_sommets.size() && z < m_sommets.size() && x != y && x != z && y != z) {
        Couleur color;
        color.saisir();
        m_triangles.push_back(new Triangle(m_sommets[x], m_sommets[y], m_sommets[z], color));
        return true;
    }
    else {
        util::videCin();
        std::cout << "Anomalie de saisie" << std::endl;
    }
}

void Maillage::draw() {
    Svgfile svgout("output.svg");
    svgout.addGrid();
    for(auto& t : m_triangles)
    {
        t->draw(svgout);
    }
    for(auto& s : m_sommets)
    {
        s->draw(svgout);
    }
}

void Maillage::selectSommet() {
    std::cout << "Saisir indice sommet a selectionner : ";
    size_t i;
    std::cin >> i;
    if(i < m_sommets.size()){
        m_sommets[i]->select();
    }
    else{
        std::cout << "Ce sommet n'existe pas" << std::endl;
    }
}

void Maillage::deselectSommet() {
    std::cout << "Saisir indice sommet a deselectionner : ";
    size_t i;
    std::cin >> i;
    if(i < m_sommets.size()){
        m_sommets[i]->deselect();
    }
    else{
        std::cout << "Ce sommet n'existe pas" << std::endl;
    }
}

void Maillage::translateSelection() {
    std::cout << "Vecteur translation : ";
    Coords translator2000;
    translator2000.saisir();
    for(auto sommet : m_sommets){
        if(sommet->getS()){
            sommet->translate(translator2000);
        }
    }
}
