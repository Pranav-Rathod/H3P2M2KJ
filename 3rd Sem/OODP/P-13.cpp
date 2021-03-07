
/* =============================================================================
    Write a program to obtain the largest of three numbers using inline
    function.
============================================================================== */

#include<iostream>
#include<conio.h>
using namespace std;

inline int largest(int &a,int &b,int &c)
{
    int big=0;
    if(a>b)
        big=a;
    else
        big=b;
    if(c>big)
        big=c;
    return big;
}

int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers To Find The Largest "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"\nb = ";
    cin>>b;
    cout<<"\nc = ";
    cin>>c;
    int large = largest(a,b,c);
    cout<<"\n Largest of "<<a<<","<<b<<" and "<<c<<" is "<<large;
    getch();
    return(0);
}