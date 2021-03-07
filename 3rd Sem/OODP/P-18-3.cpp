
/* =============================================================================
    Define a Class “complex” having data members as real and imag and
    member functions as add_comp() & show_comp(). Write a C++ program
    to get information of 2 complex numbers and add these 2 complexnumbers and 
    display this result using Friend Function Concept.
============================================================================== */

#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
    float real, img;
    public:
    complex()
    {

    }
    complex(float a,float b)
    {
        real=a;
        img=b;
    }

    complex operator+(complex);
    void show_comp();
};

    complex complex::operator+(complex ob2)
    {
     complex ob3;
     ob3.real=real+ob2.real;
     ob3.img=img+ob2.img;
     return ob3;
    }

    void complex :: show_comp()
    {
        cout<<"Real = "<<real<<endl;
        cout<<"Imaginary = "<<img<<endl;
    }

int main()
{
    complex ob1(1,2);
    complex ob2(2,3);
    complex ob3;
    ob3=ob1+ob2;
    ob3.show_comp();
    return 0;
}