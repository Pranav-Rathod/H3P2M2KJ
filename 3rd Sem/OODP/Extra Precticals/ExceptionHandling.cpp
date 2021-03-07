
/* =============================================================================
    Write a function templates for finding the minimum value contained in an
    array.
============================================================================== */

#include<iostream>

using namespace std;

int multiplication(int a, int b)
{
    if (b == 0)
    {
        throw b;
    }
    return (a*b);
}

int main()
{
    int x = 25;
    int y = 0;
    float z = 0;

    try
    {
        z = multiplication(x,y);
        cout << z << endl;
    }
    catch(int m)
    {
        cout << "Exception Detected..!" << endl;
    }
}