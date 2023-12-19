#include <iostream>
#include <string>

using namespace std;

struct Date
{
    int jour;
    int mois;
    int annee;
};

struct Produit
{
    string nom;
    float prix;
    Date dateFabrication;
};

int main()
{
    Produit produit;

    cout << "Entrez le nom du produit : ";
    getline(cin, produit.nom);

    cout << "Entrez le prix du produit : ";
    cin >> produit.prix;

    cout << "Entrez la date de fabrication (jour mois annee) : ";
    cin >> produit.dateFabrication.jour >> produit.dateFabrication.mois >> produit.dateFabrication.annee;

    // Affichage des informations du produit
    std::cout << "\nInformations du Produit:" << std::endl;
    std::cout << "Nom: " << produit.nom << std::endl;
    std::cout << "Prix: " << produit.prix << std::endl;
    std::cout << "Date de fabrication: " << produit.dateFabrication.jour << "/"
              << produit.dateFabrication.mois << "/" << produit.dateFabrication.annee << std::endl;

    return 0;
}