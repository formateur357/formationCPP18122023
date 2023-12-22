#include "figure.h"
#include "triangle.h"
#include "cercle.h"
#include <iostream>
#include <vector>
#include <memory> // Pour utiliser smart pointers

using namespace std;

void faireQuelqueChose(Figure &f) { f.toString(); }

int main()
{
    // Utilisation de smart pointers pour une gestion automatique de la mémoire
    vector<unique_ptr<Figure>> figures;

    // Ajout d'un triangle
    figures.push_back(make_unique<Triangle>(5, 8));

    // Ajout d'un cercle
    figures.push_back(make_unique<Cercle>(10));

    // Itération sur le tableau de figures
    for (auto &figure : figures)
    {
        cout << "Je suis un " << figure->description() << endl;
        cout << "Mes attributs sont : " << figure->toString() << endl;

        // Appel de faireQuelqueChose pour chaque figure
        faireQuelqueChose(*figure);
    }

    return 0;
}

// #include "cercle.h"

// void faireQuelqueChose(Figure &f) { f.toString(); }

// int main()
// {
//     // Triangle triangle(5, 8);
//     // cout << "Je suis un " << triangle.description() << endl;
//     // cout << "Mes attributs sont : "
//     //      << " " << triangle.toString() << endl;

//     Cercle c(10);
//     // Un Cercle est ici passé à une fonction qui attend une Forme.
//     // Comme un Cercle est une Forme, il peut être traité comme tel par faireQuelqueChose()
//     faireQuelqueChose(c);
//     return 0;
// }