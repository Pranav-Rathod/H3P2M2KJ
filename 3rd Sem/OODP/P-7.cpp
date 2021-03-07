
/* =============================================================================
    Counts numbers of occurrences of each vowel and total vowels in String.
============================================================================== */

#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int j, a=0, e=0, i=0, o=0, u=0, t=0; 
    cout<<"Enter string: "; 
    cin.getline(str,50);

    for(j=0;str[j]!='\0';j++)
    {
        switch(str[j])
        {
            case 'a':
            case 'A':a++; break;

            case 'e':
            case 'E':e++; break;

            case 'i':
            case 'I':i++; break;

            case 'o':
            case 'O':o++; break;

            case 'u':
            case 'U':u++; break;
        }
    }
    t=a+e+i+o+u; 
    cout<<"A:"<<a<<"\n"; 
    cout<<"E:"<<e<<"\n"; 
    cout<<"I:"<<i<<"\n"; 
    cout<<"O:"<<o<<"\n"; 
    cout<<"U:"<<u<<"\n"; 
    cout<<"Total:"<<t<<"\n";
}