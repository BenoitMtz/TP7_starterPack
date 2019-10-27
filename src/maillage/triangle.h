//
// Created by benoit on 13/10/2019.
//

#ifndef MAILLAGE_EXO_TRIANGLE_H
#define MAILLAGE_EXO_TRIANGLE_H

#include <iostream>
#include <vector>
#include "sommet.h"
#include "svgfile.h"
#include "couleur.h"

class Triangle {
public:
    Triangle();
    Triangle(Sommet* a, Sommet* b, Sommet* c);
    Triangle(Sommet* a, Sommet* b, Sommet* c, Couleur color);
    void draw(Svgfile& svgout);
private:
    std::vector<Sommet*> m_sommets;
    Couleur m_color;
};


#endif //MAILLAGE_EXO_TRIANGLE_H
