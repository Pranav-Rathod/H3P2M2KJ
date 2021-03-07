
/* =============================================================================
    Find area of circle, rectangle and triangle using enum datatype.
============================================================================== */

#include<iostream>
using namespace std;

enum shape {Circle = 1, Rectangle = 2, Triangle = 3} choice;
int main()
{
    int ch; float a,b,c; x:
    cout<<"1.Circle\t2.Rectangle\t3.Triangle\n"; cout<<"Enter your choice: ";
    cin>>ch;

    switch(ch)
    {
        case 1 : choice = Circle;
        break;

        case 2 : choice = Rectangle;
        break;

        case 3 : choice = Triangle;
        break;

        default : cout<<"Wrong choice...Enter again!!\n"; goto x;
    }

    switch(choice)
    {
        case 1 : cout<<"Enter radius: "; cin>>a;
        c = 3.14 * a * a;
        cout<<"Area of circle: "<<c<<endl; break;

        case 2 : cout<<"Enter length: "; cin>>a;
        cout<<"Enter width: "; cin>>b;
        c = a *b;
        cout<<"Area of rectangle: "<<c<<endl; break;

        case 3 : cout<<"Enter base: "; cin>>a;
        cout<<"Enter height: "; cin>>b;
        c = (a * b)/2;
        cout<<"Area of triangle: "<<c<<endl; break;
    }
}