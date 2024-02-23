#include "Fraction.h"

int main(){
    Fraction a(3, 5);
    Fraction b = a;
    b.setNumerator(2); b.setDenominator(7);
    Fraction c, d, e, f; //test test ignore this comment

    cout << "Fraction a: " << a.getNumerator() << "/" << a.getDenominator() << endl;
    cout << "Fraction b: " << b.getNumerator() << "/" << b.getDenominator() << endl;

    c = Fraction::add(a, b);
    d = Fraction::subtract(a, b);
    e = Fraction::multiply(a, b);
    f = Fraction::divide(a, b);

    cout << "Addition: " << c.toString() << endl;
    cout << "Subtraction: " << d.toString() << endl;
    cout << "Multiplication: " << e.toString() << endl;
    cout << "Division: " << f.toString() << endl;

    a.add(b);
    cout << "After adding b to a: " << a.toString() << endl;

    a.subtract(b);
    cout << "After subtracting b from a: " << a.toString() << endl;

    a.multiply(b);
    cout << "After multiplying a by b: " << a.toString() << endl;

    a.divide(b);
    cout << "After dividing a by b: " << a.toString() << endl;

    return 0;
}