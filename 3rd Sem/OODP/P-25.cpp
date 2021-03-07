
/* =============================================================================
    Implement the following class using abstract class.
        a. Shape
    i. TwoDimensional
        1. Triangle
        2. Rectangle
        3. Circle
    ii. ThreeDimensional
        1. Box
        2. Cone
        3. Cylinder
        4. Sphere
============================================================================== */

#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
    public:
    float area;
    void display()
    {
        cout << "Area is : "<< area <<endl;
    }
};

class Dimension : public shape
{
    public:
    float dim1;
    float dim2;

    void get_Dimension()
    {
        cout << "\nEnter Dim1 :";
        cin >> dim1;
        cout << "Enter Dim2 :";
        cin >> dim2;
    }
};

class Triangle : public Dimension
{
    public:
    void cal1()
    {
        get_Dimension();
        area=0.5*dim1*dim2;
        cout<<"\nFor Triangle : \n";
    }
};

class Circle: public Dimension
{
    public:
    void cal2()
    {
        get_Dimension();
        area = 3.14*dim1*dim2;
        cout<<"\nFor Circle : \n";
    }
};

class Rectangle : public Dimension
{
    public:
    void cal3()
    {
        get_Dimension();
        area = dim1*dim2;
        cout<<"\nFor Rectangle : \n";
    }
};

int main()
{
    int c;
    char ch;

    while (1)
    {
        cout<<"\n\n";
        cout<<"1.Triangle.\n";
        cout<<"2.Rectangle.\n";
        cout<<"3.Circle.\n";
        cout<<"4.Exit.\n";
        cout<<"Enter your Choice :";
        cin>>c;

        switch(c)
        {
            case 1:
                Triangle t;
                cout <<"\n==== Triangle ====\n";
                cout <<"Enter L & B :";
                t.cal1();
                t.display();
                break;

            case 2:
                Rectangle r;
                cout <<"\n==== Rectangle ====\n";
                cout <<"Enter L & W :";
                r.cal3();
                r.display();
                break;

            case 3:
                Circle c;
                cout<<"\n==== Circle ====\n";
                cout<<"Enter R :";
                c.cal2();
                c.display();
                break;

            case 4: exit(0);

            default: cout<<"Invalid Choice...!";
        }
    }
    return 0;
}