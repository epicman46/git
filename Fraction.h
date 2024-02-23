#include <bits/stdc++.h>
using namespace std;

class Fraction {
private:
    static int numOfFractions;
    int numerator;
    int denominator;
public:
    Fraction();

    Fraction(int num, int den);

    Fraction(const Fraction& f);

    int getNumerator() const;

    int getDenominator() const;

    void setNumerator(int n);

    void setDenominator(int d);

    string toString() const;

    void add(const Fraction& f);

    void subtract(const Fraction& f);

    void multiply(const Fraction& f);

    void divide(const Fraction& f);

    static Fraction add(const Fraction& f, const Fraction& g);

    static Fraction subtract(const Fraction& f, const Fraction& g);

    static Fraction multiply(const Fraction& f, const Fraction& g);

    static Fraction divide(const Fraction& f, const Fraction& g);

};
