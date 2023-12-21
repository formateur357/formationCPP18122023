#include "Rational.h"

int main()
{
    Rational r1(1, 2);
    Rational r2(1, 0);

    std::cout << r1 << " + " << r2 << " = " << r1 + r2 << std::endl;
    std::cout << r1 << " - " << r2 << " = " << r1 - r2 << std::endl;
    std::cout << r1 << " * " << r2 << " = " << r1 * r2 << std::endl;
    std::cout << r1 << " / " << r2 << " = " << r1 / r2 << std::endl;
    std::cout << r1 << " == " << r2 << " = " << (r1 == r2 ? "true" : "false") << std::endl;

    return 0;
}