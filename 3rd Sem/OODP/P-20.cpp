
/* =============================================================================
   Define a class String. Use overloaded ‘==’ operator to compare two strings.
============================================================================== */

#include<iostream>
#include<string>
using namespace std;

class String
{    
    string a;

public:
    String()
    {}
    
    String(string b)
    {
        a = b;
    }
    void operator == (String);
};

void String :: operator == (String ob2)
{
    int i,flag=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!= ob2.a[i])
        {
            flag=1;
        }
    }
    if(flag==0)
        cout<<"STRINGS ARE EQUAL..."<<endl;
    else
        cout<<"STRINGS ARE NOT EQUAL...";
}

int main()
{
    String ob1,ob2;
    string s;
    cout<<"Enter first string : ";
    cin>>s;
    ob1=String(s);
    cout<<"Enter second string : ";
    cin>>s;
    ob2=String(s);
    ob1 == ob2;
}