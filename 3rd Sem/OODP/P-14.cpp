
/* =============================================================================
    Create a class that imitates part of the functionality of the base data type
    int. Call the class Int. The only data in this class is an int variable. Include
    member functions to initialize an int to 0, to initialize it to an int value, to
    display it, and to add two Int values. Write a program that exercises this
    class by creating two initialized Int values, adding these two initialized
    values, adding these two initialized value and placing the respond in the
    un-initialized value, and then display this result.
============================================================================== */

#include<iostream>
using namespace std;
class Int
{
    int a;
public:
    Int()
    {
        a=0;
    }
    Int(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a;
    }
       friend Int add(Int int1,Int int2);
};

Int add(Int int1, Int int2)
{
    Int int3;
    int3.a=int1.a+int2.a;
    return(int3);
}


int  main()
{
    Int i1(50),i2(20),i3;
    i3=add(i1,i2);
    cout<<"\n for object1 a :";
    i1.display();
    cout<<"\n for object2 a :";
    i2.display();
    cout<<"\n for object3 a :";
    i3.display();
}