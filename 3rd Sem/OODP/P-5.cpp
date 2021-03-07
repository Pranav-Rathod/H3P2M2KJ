
/* =============================================================================
    Program to reverse a string
============================================================================== */

#include <iostream> 
using namespace std; 
int main()
{
    int i,j=0,l=0;
    char a[50],b[50]; cout<<"Enter string: "; cin.getline(a,50);

    for(i=0;a[i]!='\0';i++)
        {   l++;    }

    for(i=0;i<l;i++)
        {
            b[i]=a[l-1-i]; b[l]=NULL;
        }

    cout<<"Reverse string is: "<<b; return 0;
}