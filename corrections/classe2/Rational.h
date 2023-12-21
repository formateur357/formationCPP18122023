#pragma once
#include <iostream>

using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;

    void reduce();
    int findGDC(int numerator, int denominator);

public:
    Rational(int numerator, int denominator);

    friend Rational operator+(const Rational &r1, const Rational &r2);
    friend Rational operator-(const Rational &r1, const Rational &r2);
    friend Rational operator*(const Rational &r1, const Rational &r2);
    friend Rational operator/(const Rational &r1, const Rational &r2);

    friend bool operator==(const Rational &r1, const Rational &r2);

    friend ostream &operator<<(ostream &os, const Rational &r2);
};