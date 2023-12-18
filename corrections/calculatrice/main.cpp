#include <iostream>
#include "calculator.h"

int main()
{
    double num1, num2;
    char operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        std::cout << "Sum = " << add(num1, num2);
        break;
    case '-':
        std::cout << "Difference = " << subtract(num1, num2);
        break;
    case '*':
        std::cout << "Product = " << multiply(num1, num2);
        break;
    case '/':
        std::cout << "Quotient = " << divide(num1, num2);
        if (num2 == 0)
            std::cout << " (division by zero)";
        break;
    default:
        std::cout << "Invalid operator";
    }

    return 0;
}