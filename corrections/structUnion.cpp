#include <iostream>
#include <string>

struct Etudiant
{
    float notes[5];
    int age;
    std::string nom;
};

float calculerMoyenne(float notes[], int taille)
{
    float somme = 0;
    for (int i = 0; i < taille; i++)
    {
        somme += notes[i];
    }

    return somme / taille;
}

int main()
{
    Etudiant etudiant;

    std::cout << "Entrez le nom de l'etudiant : ";
    std::getline(std::cin, etudiant.nom);

    std::cout << "Entrez l'age de l'etudiant : ";
    std::cin >> etudiant.age;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Entrez la note : " << i + 1 << " : ";
        std::cin >> etudiant.notes[i];
    }

    float moyenne = calculerMoyenne(etudiant.notes, 5);
    std::cout << "La moyenne des notes de " << etudiant.nom << " est " << moyenne << std::endl;

    return 0;
}