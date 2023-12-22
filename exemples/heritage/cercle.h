#pragma once

#include "figure.h"

class Cercle : public Figure // Triangle hérite de Figure
{
protected:
    double largeur; // les propriétés spécifiques d’un Triangle

public:
    Cercle(double largeur) : Figure(0, 0, 0), largeur(largeur) {}
    ~Cercle() {}

    string description() const override // redéfinition pour un Triangle
    {
        return "Cercle"; // je suis plus précisément ...
    }

    void toString() const override // redéfinition pour un Triangle
    {
        Figure::toString();
        cout << " " << largeur; // mes attributs spécifiques
    }
};