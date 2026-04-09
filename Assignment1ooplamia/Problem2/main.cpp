#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction f1, f2;

    cout << "Enter first fraction: ";
    cin >> f1;

    cout << "Enter second fraction: ";
    cin >> f2;

    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    cout << "Addition: " << f1 + f2 << endl;
    cout << "Subtraction: " << f1 - f2 << endl;
    cout << "Multiplication: " << f1 * f2 << endl;
    cout << "Division: " << f1 / f2 << endl;

    cout << "f1 == f2: " << (f1 == f2) << endl;
    cout << "f1 != f2: " << (f1 != f2) << endl;
    cout << "f1 < f2: " << (f1 < f2) << endl;
    cout << "f1 > f2: " << (f1 > f2) << endl;

    return 0;
}