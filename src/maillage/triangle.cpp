//
// Created by benoit on 13/10/2019.
//

#include "triangle.h"

Triangle::Triangle() {

}

Triangle::Triangle(Sommet *a, Sommet *b, Sommet *c) {
    m_sommets.push_back(a);
    m_sommets.push_back(b);
    m_sommets.push_back(c);
}

Triangle::Triangle(Sommet *a, Sommet *b, Sommet *c, Couleur color) : Triangle(a,b,c) {
    m_color = color;
}

void Triangle::draw(Svgfile& svgout) {
    svgout.addTriangle(m_sommets[0]->getX(), m_sommets[0]->getY(),
            m_sommets[1]->getX(), m_sommets[1]->getY(),
            m_sommets[2]->getX(), m_sommets[2]->getY(), std::string(m_color), 2, "black");
}
