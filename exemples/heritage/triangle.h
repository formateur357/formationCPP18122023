#pragma once

#include "figure.h"

class Triangle : public Figure // Triangle hérite de Figure
{
protected:
    double base, hauteur; // les propriétés spécifiques d’un Triangle

public:
    Triangle(double base, double hauteur, double x = 0, double y = 0) : Figure(x, y, 0), base(base), hauteur(hauteur) {}
    ~Triangle() {}

    string description() const // redéfinition pour un Triangle
    {
        return "Triangle"; // je suis plus précisément ...
    }

    void toString() const // redéfinition pour un Triangle
    {
        Figure::toString();
        cout << " " << base << " " << hauteur; // mes attributs spécifiques
    }
};