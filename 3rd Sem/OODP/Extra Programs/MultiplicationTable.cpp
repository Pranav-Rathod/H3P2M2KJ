#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter Your Number: "; cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << "\n";
        cout << "" << num << " * " << i << " = " << num * i;
    }
    cout << "\n";
}