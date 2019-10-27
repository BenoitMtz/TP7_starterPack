//
// Created by benoit on 13/10/2019.
//

#ifndef MAILLAGE_EXO_MAILLAGE_H
#define MAILLAGE_EXO_MAILLAGE_H


#include <vector>
#include "sommet.h"
#include "triangle.h"

class Maillage {
public:
    void addSommet();
    void displaySommets();
    bool addTriangle();
    void draw();
    void selectSommet();
    void deselectSommet();
    void translateSelection();
private:
    std::vector<Sommet*> m_sommets;
    std::vector<Triangle*> m_triangles;
};


#endif //MAILLAGE_EXO_MAILLAGE_H
