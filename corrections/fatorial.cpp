#include <iostream>

int factorial(int n)
{
    if (n <= 1)
        return 1; // Cas de base : la factorielle de 0 ou 1 est 1
    else
        return n * factorial(n - 1); // Appel récursif
}

int main()
{
    int num;

    std::cout << "Enter a positive number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " is " << factorial(num);

    return 0;
}