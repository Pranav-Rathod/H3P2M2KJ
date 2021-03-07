
/* =============================================================================
        Program to perform the following:
    -	Accept three numbers
    -	Calculate average
    -	Find smallest and largest numbers
    -	Display the results such as average, maximum, and minimum.
============================================================================== */

#include <iostream>
using namespace std;

int main()
{
int a,b,c,avg;

cout << "Enter Value of A: "; cin>>a;
cout << "Enter Value of B: "; cin>>b;
cout << "Enter Value of C: "; cin>>c;

//============ 1st part ============//
if(a>b && a>c)
    {
        cout << "\nA is Largest\n";
    }
else if(b>c)
    {
        cout << "\nB is Largest\n";
    }
else
    {
        cout << "\nC is Largest\n";
    }
 
//============ 2nd part ============//
if(a<b && a<c)
    {
        cout << "A is Smallest\n";
    }
else if(b<c)
    {
        cout << "B is Smallest\n";
    }
else
    {
        cout << "C is Smallest\n";
    }

//============ 3rd part ============//
cout<<"\nmaximum: "; 
if((a>b)&&(a>c))
    {   cout<<a;    }

else if(b>c)
    {   cout<<b;    }

else
    {   cout<<c;    }

cout<<"\nminimum: ";
if(a<b && a<c)
    {   cout<<a;    }

else if(b<c)
    {   cout<<b;    }

else{
cout<<c;
}

//============ 4th part ============//
avg = (a+b+c)/3;
cout << "\nAverage: " << avg;
return 0;
}