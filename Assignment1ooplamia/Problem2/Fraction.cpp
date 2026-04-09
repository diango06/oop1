#include "Fraction.h"

// Helper function to simplify fraction
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

void Fraction::simplify() {
    int g = gcd(abs(numerator), abs(denominator));
    numerator /= g;
    denominator /= g;

    // keep denominator positive
    if (denominator < 0) {
        numerator *= -1;
        denominator *= -1;
    }
}

// Constructors
Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int n, int d) {
    if (d == 0) {
        cout << "Error: Denominator cannot be zero!\n";
        denominator = 1;
    }
    else {
        numerator = n;
        denominator = d;
        simplify();
    }
}

// Arithmetic operators
Fraction Fraction::operator+(const Fraction& o) {
    return Fraction(numerator * o.denominator + o.numerator * denominator,
        denominator * o.denominator);
}

Fraction Fraction::operator-(const Fraction& o) {
    return Fraction(numerator * o.denominator - o.numerator * denominator,
        denominator * o.denominator);
}

Fraction Fraction::operator*(const Fraction& o) {
    return Fraction(numerator * o.numerator,
        denominator * o.denominator);
}

Fraction Fraction::operator/(const Fraction& o) {
    return Fraction(numerator * o.denominator,
        denominator * o.numerator);
}

// Comparison operators
bool Fraction::operator==(const Fraction& o) {
    return numerator == o.numerator && denominator == o.denominator;
}

bool Fraction::operator!=(const Fraction& o) {
    return !(*this == o);
}

bool Fraction::operator<(const Fraction& o) {
    return numerator * o.denominator < o.numerator * denominator;
}

bool Fraction::operator>(const Fraction& o) {
    return numerator * o.denominator > o.numerator * denominator;
}

bool Fraction::operator<=(const Fraction& o) {
    return !(*this > o);
}

bool Fraction::operator>=(const Fraction& o) {
    return !(*this < o);
}

// Output <<
ostream& operator<<(ostream& out, const Fraction& f) {
    if (f.denominator == 1)
        out << f.numerator;
    else
        out << f.numerator << "/" << f.denominator;
    return out;
}

// Input >>
istream& operator>>(istream& in, Fraction& f) {
    char ch;
    in >> f.numerator;
    if (in.peek() == '/') {
        in >> ch >> f.denominator;
    }
    else {
        f.denominator = 1;
    }
    f.simplify();
    return in;
}