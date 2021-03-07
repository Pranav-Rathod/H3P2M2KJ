
/* =============================================================================
    Write a function power () to raise a number m to a power n without using
    Math.h header file for following scenario.
        a. The Function takes double value for m and int value for n, and
           returns the result correctly. 
        b. Use a default value of 2 for n to make function to calculate squares
           when this argument is omitted.
        c. Take an int value for m.
    In above all cases function name must be same. Write a main() that
    calls above 3 cases.
============================================================================== */

#include<iostream>
using namespace std;

void power(double m, int n)
{
    double r=1;
    for (int i = 0; i <= n; i++)
    {
        r *= m;
    }
    cout << "The Result is: " << r << endl;
}

void power(int m, int n=2)
{
    int r=1;
    for (int i = 0; i <= n; i++)
    {
        r = r*m;
    }
    //return r;
    cout << "The Result is: " << r << endl;
}

void power(int m, double n)
{
    double r=1;
    for (int i = 0; i <= n; i++)
    {
        r = r*m;
    }
    //return r;
    cout << "The Result is: " << r << endl;
}

int main()
{
    int a,c;
    double b;

    cout << "Enter One Value Double & one int: ";
    cin >> b >> a;
    power(b,a);

    cout << "Enter One int value: ";
    cin >> a;
    power(a);

    cout << "Enter Two int value: ";
    cin >> a >> c;
    power(a,c);

    cout << "Enter One int & One Double value: ";
    cin >> a >> b;
    power(a,b);
    return 0;
}