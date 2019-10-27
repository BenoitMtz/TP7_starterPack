//
// Created by benoit on 13/10/2019.
//

#include <iostream>
#include "sommet.h"

Sommet::Sommet(Coords coords) : m_coords{coords}, m_selected{false}
{}

Sommet::Sommet() : m_selected{false}
{}

int Sommet::getX() const {
    return m_coords.getX();
}

int Sommet::getY() const {
    return m_coords.getY();
}

bool Sommet::getS() const {
    return m_selected;
}

void Sommet::display() const {
    m_coords.afficher();

}

void Sommet::draw(Svgfile& svgout) const {
    svgout.addDisk(m_coords.getX(), m_coords.getY(), 5);
}

void Sommet::select() {
    m_selected = true;
}

void Sommet::deselect() {
    m_selected = false;
}

void Sommet::translate(Coords translator) {
    m_coords = m_coords + translator;
}