#include <iostream>
#include "temperature_conversion.h" // Inclusion du fichier d'en-tête

int main()
{
    double temp;
    char unit;

    std::cout << "Enter temperature followed by 'C' for Celsius or 'F' for Fahrenheit: ";
    std::cin >> temp >> unit;

    if (unit == 'C' || unit == 'c')
        std::cout << temp << " Celsius is " << celsiusToFahrenheit(temp) << " Fahrenheit";
    else if (unit == 'F' || unit == 'f')
        std::cout << temp << " Fahrenheit is " << fahrenheitToCelsius(temp) << " Celsius";
    else
        std::cout << "Invalid unit";

    return 0;
}