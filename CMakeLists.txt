cmake_minimum_required(VERSION 3.15)
project(maillage_v3_exo)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/geometrie)
include_directories(src/graphisme)
include_directories(src/maillage)
include_directories(src/svg)
include_directories(src/util)

add_executable(maillage_v3_exo
        src/geometrie/cadre.cpp
        src/geometrie/cadre.h
        src/geometrie/coords.cpp
        src/geometrie/coords.h
        src/geometrie/matrice.cpp
        src/geometrie/matrice.h
        src/geometrie/transformation.cpp
        src/geometrie/transformation.h
        src/graphisme/couleur.cpp
        src/graphisme/couleur.h
        src/graphisme/styledessin.h
        src/maillage/maillage.cpp
        src/maillage/maillage.h
        src/maillage/sommet.cpp
        src/maillage/sommet.h
        src/maillage/triangle.cpp
        src/maillage/triangle.h
        src/svg/svgfile.cpp
        src/svg/svgfile.h
        src/util/util.cpp
        src/util/util.h
        src/main.cpp)
