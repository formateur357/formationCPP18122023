#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

struct Livre
{
    int id;
    string titre;
    string auteur;

    Livre(int id = 0, string titre = "", string auteur = "") : id(id), titre(titre), auteur(auteur) {}
};

void afficherLivre(const Livre livre)
{
    cout << "ID : " << livre.id << ", Titre : " << livre.titre << ", Auteur : " << livre.auteur << endl;
}

int main()
{
    vector<Livre> bibliotheque;

    bibliotheque.push_back(Livre(1, "Livre A", "Auteur A"));
    bibliotheque.push_back(Livre(2, "Livre B", "Auteur B"));

    cout << "Liste de livres: " << endl;
    for (const auto &livre : bibliotheque)
    {
        afficherLivre(livre);
    }

    /* alternative avec iterateurs
        for (auto it = bibliotheque.begin(); it != bibliotheque.end; it++) {
            afficherLivre(*it);
        }
    */

    map<int, Livre> mapBibliotheque;
    for (const Livre &livre : bibliotheque)
    {
        mapBibliotheque[livre.id] = livre;
    }

    int idRecherche = 1;
    auto it = mapBibliotheque.find(idRecherche);
    if (it != mapBibliotheque.end())
    {
        cout << "Livre trouve: ";
        afficherLivre(it->second);
    }
    else
    {
        cout << "Livre non trouve." << endl;
    }

    set<int> emprunts;
    emprunts.insert(1);
    if (emprunts.find(1) != emprunts.end())
    {
        cout << "Livre Id 1 est empruntee." << endl;
    }

    sort(bibliotheque.begin(), bibliotheque.end(), [](const Livre &a, Livre &b)
         { return a.titre < b.titre; });

    vector<Livre> livresAuteurA;
    copy_if(bibliotheque.begin(), bibliotheque.end(), back_inserter(livresAuteurA), [](const Livre &livre)
            { return livre.auteur == "Auteur A"; });

    unordered_map<string, vector<Livre>> livresParAuteur;
    for (const auto &livre : bibliotheque)
    {
        livresParAuteur[livre.auteur].push_back(livre);
    };

    auto lower = lower_bound(bibliotheque.begin(), bibliotheque.end(), "Livre A", [](const Livre &livre, const string &titre)
                             { return livre.titre < titre; });

    auto upper = upper_bound(bibliotheque.begin(), bibliotheque.end(), "Livre B", [](const Livre &livre, const string &titre)
                             { return livre.titre < titre; });

    cout << "Livres suggeres : " << endl;
    for (auto it = lower; it != upper; ++it)
    {
        afficherLivre(*it);
    }

    return 0;
}
