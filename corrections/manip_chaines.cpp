#include <iostream>
#include <string> // Inclut la bibliothèque string pour utiliser std::string

int main()
{
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str); // Lecture de la ligne entière

    // Inversion de la chaîne
    for (int i = str.length() - 1; i >= 0; i--)
        std::cout << str[i];

    return 0;
}