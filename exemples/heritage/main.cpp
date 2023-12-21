#include <iostream>

using namespace std;

#include "figure.h"
#include "triangle.h"
#include "cercle.h"

void faireQuelqueChose(Figure &f) { f.toString(); }

int main()
{
    // Triangle triangle(5, 8);
    // cout << "Je suis un " << triangle.description() << endl;
    // cout << "Mes attributs sont : "
    //      << " " << triangle.toString() << endl;

    Cercle c(10);
    // Un Cercle est ici passé à une fonction qui attend une Forme.
    // Comme un Cercle est une Forme, il peut être traité comme tel par faireQuelqueChose()
    faireQuelqueChose(c);
    return 0;
}