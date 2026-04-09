#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    void simplify(); // helper function

public:
    // Constructors
    Fraction();               // default
    Fraction(int n, int d);   // parameterized

    // Arithmetic operators
    Fraction operator+(const Fraction& other);
    Fraction operator-(const Fraction& other);
    Fraction operator*(const Fraction& other);
    Fraction operator/(const Fraction& other);

    // Comparison operators
    bool operator==(const Fraction& other);
    bool operator!=(const Fraction& other);
    bool operator<(const Fraction& other);
    bool operator>(const Fraction& other);
    bool operator<=(const Fraction& other);
    bool operator>=(const Fraction& other);

    // I/O operators
    friend ostream& operator<<(ostream& out, const Fraction& f);
    friend istream& operator>>(istream& in, Fraction& f);
};

#endif
