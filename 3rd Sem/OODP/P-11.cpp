
/* =============================================================================
    Write a program to evaluate following investment equation
    V = P(1+r)n
    and print the tables which would give the value of V for various
    combination of the following values of P, r, and n:
        P: 1000, 2000, 3000, ........, 10000
        r: 0.10, 0.12, 0.13, ........, 0.20
        n: 1, 2, 3, ........, 10
============================================================================== */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int p=1000, n=1;
    float r=0.11,v;
    cout << "==============================================================" << endl;
    cout << setw(15) << "P" << setw(15) << "R" << setw(15) << "N" << setw(15) << "V" << endl;
    cout << "==============================================================" << endl;
    for (int n = 1; n <= 10 ; n++)
    {
        v = p * pow((1+r),n);
        cout << setw(15) << p << setw(15) << r << setw(15) << n << setw(15) << v << endl;
        p += 1000;
        r += 0.01;
    }
    cout << "==============================================================" << endl;
    return 0;
}