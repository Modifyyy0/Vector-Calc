#include <iostream>
#include "headers/vectorCalc.h"

using namespace std;

int main()
{

    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector v3;

    v3 = v1 + v2;

    cout << "Addition" << endl;

    cout << v3 << endl;

    cout << "dot product" << endl;

    double d = v1.dot(v2);

    cout << d << endl;

    cout << "Substraction" << endl;

    v3 = v1 - v2;

    cout << v3 << endl;

    cout << "Magnitude" << endl;

    double m = v1.magnitude();

    cout << m << endl;
}