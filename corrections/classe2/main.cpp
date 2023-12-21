#include "Rational.h"

int main()
{
    Rational r1(1, 2);
    Rational r2(1, 3);

    std::cout << r1 << " + " << r2 << " = " << r1 + r2 << std::endl;
    std::cout << r1 << " - " << r2 << " = " << r1 - r2 << std::endl;
    std::cout << r1 << " * " << r2 << " = " << r1 * r2 << std::endl;
    std::cout << r1 << " / " << r2 << " = " << r1 / r2 << std::endl;
    std::cout << r1 << " == " << r2 << " = " << (r1 == r2 ? "true" : "false") << std::endl;

    // Tests des opérateurs += et -=
    Rational r3(1, 2);
    Rational r4(1, 6);

    r3 += r4;
    std::cout << "Après r3 += r4, r3 = " << r3 << std::endl;

    r3 -= r4;
    std::cout << "Après r3 -= r4, r3 = " << r3 << std::endl;

    return 0;
}