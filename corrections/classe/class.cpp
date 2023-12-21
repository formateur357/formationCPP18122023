#include <iostream>
#include "class.h"

Utilisateur::Utilisateur(const string &nom = NULL, int age = 0, const string &email = NULL) : nom(nom), age(age), email(email)
{
    cout << "Utilisateur cree: " << nom << endl;
}

Utilisateur::~Utilisateur()
{
    cout << "Utilisateur detruit: " << nom << endl;
}

string Utilisateur::getNom() const
{
    return nom;
}

int Utilisateur::getAge() const
{
    return age;
}

string Utilisateur::getEmail() const
{
    return email;
}

void Utilisateur::setNom(const string &nouveauNom)
{
    nom = nouveauNom;
}

void Utilisateur::setAge(const int nouvelAge)
{
    if (nouvelAge > 0)
        age = nouvelAge;
}

void Utilisateur::setEmail(const string &nouvelEmail)
{
    email = nouvelEmail;
}

int main()
{
    // Création d'une instance de Utilisateur
    Utilisateur utilisateur("Jean Dupont", 30, "jean.dupont@example.com");

    // Affichage des informations de l'utilisateur
    cout << "Nom: " << utilisateur.getNom() << ", Age: " << utilisateur.getAge() << ", Email: " << utilisateur.getEmail() << endl;

    // Modification des attributs de l'utilisateur
    utilisateur.setNom("Jeanne D'Arc");
    utilisateur.setAge(25);
    utilisateur.setEmail("jeanne.darc@example.com");

    // Affichage des nouvelles informations de l'utilisateur
    cout << "Nom: " << utilisateur.getNom() << ", Age: " << utilisateur.getAge() << ", Email: " << utilisateur.getEmail() << endl;

    return 0; // Le destructeur sera appelé ici pour l'objet utilisateur
}