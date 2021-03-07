#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter Your Character: "; cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z') 
        cout<< ch << " is an UpperCase character\n";
    else if (ch >= 'a' && ch <= 'z')
        cout<< ch << " is an LowerCase character\n";
    else if (ch >= 48 && ch <= 57)
        cout<< ch << " is an Digit\n";
    else
        cout<< ch << " is an Special charecter\n";
}