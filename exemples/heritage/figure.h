#pragma once

#include <iostream>
#include <string>

using namespace std;

class Figure
{
protected:
    double x, y, z; // coordonnées du centre

public:
    Figure(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
    ~Figure() {}

    string description() const
    {
        return "Figure"; // je suis ...
    }

    void toString() const
    {
        cout << x << " " << y << " " << z; // mes attributs sous forme de string
    }
};