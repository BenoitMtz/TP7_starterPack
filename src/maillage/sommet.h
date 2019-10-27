//
// Created by benoit on 13/10/2019.
//

#ifndef MAILLAGE_EXO_SOMMET_H
#define MAILLAGE_EXO_SOMMET_H


#include "../geometrie/coords.h"
#include "../svg/svgfile.h"

class Sommet {
public:
    Sommet();
    Sommet(Coords coords);
    int getX() const;
    int getY() const;
    bool getS() const;
    void display() const;
    void draw(Svgfile& svgout) const;
    void select();
    void deselect();
    void translate(Coords translator);
private:
    Coords m_coords;
    bool m_selected;

};


#endif //MAILLAGE_EXO_SOMMET_H
