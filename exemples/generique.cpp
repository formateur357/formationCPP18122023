#include <cstring>

// Fonction générique pour comparer deux valeurs
template <typename T>
bool isEqual(T a, T b)
{
    return a == b; // Comparaison générale
}

// Spécialisation totale pour les pointeurs
template <>
bool isEqual<char *>(char *a, char *b)
{
    return std::strcmp(a, b) == 0; // Comparaison spécifique pour les chaînes C
}

// ----------------------------------------------------
// Classe générique représentant un conteneur simple
template <typename T>
class Box
{
private:
    T contenu;

public:
    // Constructeur par défaut
    Box() {}

    // Constructeur avec un contenu initial
    Box(T nouveauContenu) : contenu(nouveauContenu) {}

    // Constructeur de copie
    Box(const Box<T> &autreBox) : contenu(autreBox.contenu) {}

    // Accesseur pour obtenir le contenu
    T getContenu() const
    {
        return contenu;
    }

    // Mutateur pour modifier le contenu
    void setContenu(T nouveauContenu)
    {
        contenu = nouveauContenu;
    }

    // Surcharge de l'opérateur d'affectation
    Box<T> &operator=(const Box<T> &autreBox)
    {
        if (this != &autreBox)
        {
            contenu = autreBox.contenu;
        }
        return *this;
    }

    // Surcharge de l'opérateur << pour l'affichage
    friend std::ostream &operator<<(std::ostream &out, const Box<T> &box)
    {
        out << box.contenu;
        return out;
    }
};