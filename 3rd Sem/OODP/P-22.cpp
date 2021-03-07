
/* =============================================================================
    Define a circle class with radius as data member, necessary constructors
    and member function to compute area of circle. Class should overload
    the= = operator to compare two circle objects whether they are
    equal in radius. Demonstrate its use in main().
============================================================================== */

#include <iostream>

using namespace std;
#define PI 3.14

class Circle
{
    int rad; float area;
    public:

    Circle()
    {
        rad = 0;
    }

    Circle(int r)
    {
        rad = r;
    }

    void Area()
    {
        area = PI*rad*rad;
        cout<<"Area = "<<area<<endl;
    }

    void operator==(Circle c)
    {
        if (rad==c.rad) {cout<<"Equal Radius..."<<endl; }
        else cout<<"Radius not Equal!!"<<endl;
    }
};

int main()
{
    Circle c1, c2;
    int r;
    cout<<"Enter radius : "; cin>>r;
    c1 = Circle(r);
    cout<<"Enter radius : "; cin>>r;
    c2 = Circle(r);
    c1.Area(); c2.Area();
    c1==c2;
    return 0;
}