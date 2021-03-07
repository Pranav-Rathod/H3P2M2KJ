
/* =============================================================================
    Write a CPP Program to swap two values
    (using call by value and call by reference).
============================================================================== */

#include<iostream>
#include<conio.h>
using namespace std;

void swapbyval(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapbyref(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 100, b = 200;
    cout << "\n\n";
    cout << "Value of a: "<< a << endl;
    cout << "Value of b: "<< b << endl << endl;
    swapbyval(a, b);  // passing value to function
    cout << "Call by value" << endl;
    cout << "Value of a: "<< a << endl;
    cout << "Value of b: "<< b << endl << endl;
    swapbyref(a, b);  // passing value to function
    cout << "Call by Reference" << endl;
    cout << "Value of a: "<< a << endl;
    cout << "Value of b: "<< b << endl;
    getch();
    return 0;
}