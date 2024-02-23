#include "Fraction.h"

int Fraction::numOfFractions = 0;



Fraction::Fraction(){
    numOfFractions++;
    numerator = 0;
    denominator = 1;
}



Fraction::Fraction(int num, int den){
    numerator = num;
    denominator = den;
}


Fraction::Fraction(const Fraction& f) = default; // "= default" sets num and den equal to the copied function



int Fraction::getNumerator() const {
    return numerator;
}



int Fraction::getDenominator() const{
    return denominator;
}



void Fraction::setNumerator(int n){
    numerator = n;
}



void Fraction::setDenominator(int d){
    denominator = d;
}



string Fraction::toString() const {
    stringstream fraction;

    if(denominator == 1)
        fraction << numerator;
    else
        fraction << numerator << "/" << denominator;

    return fraction.str();
}



void Fraction::add(const Fraction& f){
    numerator = (numerator * f.denominator) + (denominator * f.numerator);
    denominator *= f.denominator;

    int d = __gcd(numerator, denominator);
    numerator = numerator / d;
    denominator = denominator / d;
}



void Fraction::subtract(const Fraction& f){
    numerator = (numerator * f.denominator) - (denominator * f.numerator);
    denominator *= f.denominator;

    int d = __gcd(numerator, denominator);
    numerator = numerator / d;
    denominator = denominator / d;
}



void Fraction::multiply(const Fraction& f){
    numerator *= f.numerator;
    denominator *= f.denominator;

    int d = __gcd(numerator, denominator);
    numerator = numerator / d;
    denominator = denominator / d;
}



void Fraction::divide(const Fraction& f){
    numerator *= f.denominator;
    denominator *= f.numerator;

    int d = __gcd(numerator, denominator);
    numerator = numerator / d;
    denominator = denominator / d;
}



Fraction Fraction::add(const Fraction& f, const Fraction& g){
    Fraction p;

    p.numerator = (f.numerator * g.denominator) + (f.denominator * g.numerator);
    p.denominator = f.denominator * g.denominator;

    p.numerator = p.numerator / (__gcd(p.numerator, p.denominator));
    p.denominator = p.denominator / (__gcd(p.numerator, p.denominator));

    return p;
}



Fraction Fraction::subtract(const Fraction& f, const Fraction& g){
    Fraction p;

    p.numerator = (f.numerator * g.denominator) - (f.denominator * g.numerator);
    p.denominator = f.denominator * g.denominator;

    p.numerator = p.numerator / (__gcd(p.numerator, p.denominator));
    p.denominator = p.denominator / (__gcd(p.numerator, p.denominator));

    return p;

}



Fraction Fraction::multiply(const Fraction &f, const Fraction &g) {
    Fraction p;

    p.numerator = f.numerator * g.numerator;
    p.denominator = f.denominator * g.denominator;

    p.numerator = p.numerator / (__gcd(p.numerator, p.denominator));
    p.denominator = p.denominator / (__gcd(p.numerator, p.denominator));

    return p;
}



Fraction Fraction::divide(const Fraction& f, const Fraction& g){
    Fraction p;

    p.numerator = f.numerator * g.denominator;
    p.denominator = f.denominator * g.numerator;

    p.numerator = p.numerator / (__gcd(p.numerator, p.denominator));
    p.denominator = p.denominator / (__gcd(p.numerator, p.denominator));

    return p;
}
