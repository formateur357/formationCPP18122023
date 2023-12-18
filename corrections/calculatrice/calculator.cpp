#include "calculator.h"
#include <cmath>

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
        return NAN; // Retourne NaN si le dénominateur est zéro.
    return num1 / num2;
}