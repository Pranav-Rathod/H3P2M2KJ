#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 25;

    cout << "\n\nBefor swape: " << a << " " << b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\n\nAfter swape: " << a << " " << b;
}