#include <iostream>
#include <string>
#include <variant>

using namespace std;

struct Etudiant
{
    string nom;
    int annee;
};

struct Enseignant
{
    string nom;
    string departement;
};

// using Personne = variant<Etudiant, Enseignant>;

union Personne
{
    Etudiant *etudiant;
    Enseignant *enseignant;
};

int main()
{
    Personne personne;
    int choix;

    cout << "Entrez 1 pour un etudiant et 2 pour un enseignant : ";
    cin >> choix;
    cin.ignore(); // nettoyer le buffer

    if (choix == 1)
    {
        // Etudiant etudiant;
        personne.etudiant = new Etudiant; // allocation dynamique
        cout << "Entrez le nom de l'etudiant : ";
        getline(cin, personne.etudiant->nom);
        cout << "Entrez l'annee de l'etudiant : ";
        cin >> personne.etudiant->annee;
        // personne = etudiant;
    }
    else if (choix == 2)
    {
        Enseignant enseignant;
        personne.enseignant = &enseignant; // allocation dynamique
        cout << "Entrez le nom de l'enseignant : ";
        getline(cin, personne.enseignant->nom);
        cout << "Entrez le departement de l'enseignant : ";
        getline(cin, personne.enseignant->departement);
    }
    else
    {
        return 1;
    }

    cout << "\nInformations: " << endl;
    if (choix == 1)
    {
        cout << "Etudiant: " << personne.etudiant->nom << ", Annee: " << personne.etudiant->annee << endl;
        delete personne.etudiant; // Libération de la mémoire
    }
    else if (choix == 2)
    {
        cout << "Enseignant: " << personne.enseignant->nom << ", Departement: " << personne.enseignant->departement << endl;
    }

    return 0;
}