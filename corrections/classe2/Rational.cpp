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

Rational &Rational::operator+=(const Rational &r)
{
    numerator = numerator * r.denominator + r.numerator * denominator;
    denominator *= r.denominator;

    reduce();

    return *this;
}

Rational &Rational::operator-=(const Rational &r)
{
    numerator = numerator * r.denominator - r.numerator * denominator;
    denominator *= r.denominator;

    reduce();

    return *this;
}

// prefix
Rational &Rational::operator++()
{
    numerator += denominator;
    reduce();
    return *this;
}

// postfix
Rational Rational::operator++(int)
{
    Rational temp = *this;
    ++(*this);
    return temp;
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

istream &operator>>(istream &is, Rational &r)
{
    char slash;

    is >> r.numerator >> slash >> r.denominator;

    if (r.denominator == 0)
    {
        throw invalid_argument("Le denominateur ne peut pas etre 0.");
    }

    r.reduce();

    return is;
}
