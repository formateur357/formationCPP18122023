#include <iostream>

union Data
{
    int entier;
    float flottant;
    char caractere;
};

int main()
{
    Data donnee;

    donnee.entier = 5;
    std::cout << "Valeur entiere : " << donnee.entier << std::endl;

    donnee.flottant = 5.5;
    std::cout << "Valeur flottante : " << donnee.flottant << std::endl;

    donnee.caractere = '6';
    std::cout << "Caractere : " << donnee.caractere << std::endl;

    return 0;
}