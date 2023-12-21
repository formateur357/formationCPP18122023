#include "Rational.h"

Rational::Rational(int numerator, int denominator) : numerator(numerator), denominator(denominator)
{
    if (denominator == 0)
    {
        throw invalid_argument("Le denominateur ne peut pas etre zero.");
    }

    reduce();
};

void Rational::reduce()
{
    int gdc = findGDC(numerator, denominator);
    numerator /= gdc;
    denominator /= gdc;
}

int Rational::findGDC(int numerator, int denominator)
{
    return denominator == 0 ? numerator : findGDC(denominator, (numerator % denominator));
}

Rational operator+(const Rational &r1, const Rational &r2)
{
    return Rational(r1.numerator * r2.denominator + r2.numerator * r1.denominator, r1.denominator * r2.denominator);
}

Rational operator-(const Rational &r1, const Rational &r2)
{
    return Rational(r1.numerator * r2.denominator - r2.numerator * r1.denominator, r1.denominator * r2.denominator);
}

Rational operator*(const Rational &r1, const Rational &r2)
{
    return Rational(r1.numerator * r2.numerator, r1.denominator * r2.denominator);
}

Rational operator/(const Rational &r1, const Rational &r2)
{
    return Rational(r1.numerator * r2.denominator, r2.numerator * r1.denominator);
}

bool operator==(const Rational &r1, const Rational &r2)
{
    return r1.numerator == r2.numerator && r1.denominator == r2.denominator;
}

ostream &operator<<(ostream &os, const Rational &r)
{
    os << r.numerator << "/" << r.denominator;
    return os;
}