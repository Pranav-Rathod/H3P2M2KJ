#include<iostream>
using namespace std;

class Shape
{
public:
 // virtual void show() = 0;                        // With "Pure virtual" Function
    virtual void show()                             // With "virtual" Function
    {
        cout << "This is a Shape Class" << endl;
    }
};

class Circle: public Shape
{   float PI = 3.14;
    float r, ans;
public:
    void getData()
    {
        cout << "Enter Radius: ";
        cin >> r;
        ans = PI*r*r;
    }
    void show()
    { cout << "Ans of equation of circle is: " << ans << endl; }
};

class Rectangle: public Shape
{   float l, w;
    float ans;
public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        ans = l*w;
    }
    void show()
    { cout << "Ans of equation of Rectangle is: " << ans << endl; }
};

class Triangle: public Shape
{
    float b, b2, ans;
public:
    void getData()
    {
        cout << "Enter Base value: ";
        cin >> b;
        cout << "Enter Side value: ";
        cin >> b2;
        ans = (b*b2)/2;
    }
    void show()
    { cout << "Ans of equation of Triangle is: " << ans << endl; }
};

int main(void)
{
    Shape S;     /* With Virtual Function, object of base class is required.
                    in Pure Virtual Function We must not have object of base class
                    Only pointer are allowed while it is in Pure Virtual Function. */

    Shape *sp;
    sp = &S;     // This Line also should remove while using Pure Virtual Function.
    sp->show();

    cout << "\nFor Circle" << endl;
    Circle C;
    C.getData();
    sp = &C;
    sp->show();

    cout << "\nFor Rectangle" << endl;
    Rectangle R;
    R.getData();
    sp = &R;
    sp->show();

    cout << "\nFor Triangle" << endl;
    Triangle T;
    T.getData();
    sp = &T;
    sp->show();
    return 0;
}