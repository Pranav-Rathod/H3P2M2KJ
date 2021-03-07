
/* =============================================================================
    Define two Classes “Time-12” and “Time-24” to represent time format.
    Write a C++ program to convert one time format to another time format
    using Type Conversion Concept.
============================================================================== */

#include<iostream>
using namespace std;
class time24
{
    int mi;
    int hr;
public:
    time24(){}
    time24(int h,int m)
    {
        hr=h;
        mi=m;
    }
    int gethr1()
    {
        return hr;
    }
    int getmin1()
    {
        return mi;
    }
    void display()
    {

        if(mi>=60)
        {
            mi=mi-60;
            hr=hr+1;
        }

        cout<<"\n"<<hr<<"HOUR "<<mi<<"MINUTES\n";
    }

};
class time12
{
    int mi;
    int hr;
public:
    time12(){}
    time12(time24 t)
    {
        hr=t.gethr1();
        mi=t.getmin1();

        if(hr>12)
        {
            hr=hr%12;
        }
        
        if(mi>=60)
        {
            mi=mi-60;
            hr=hr+1;
        }
    }
    void display()
    {
          cout<<"\n"<<hr<<"HOUR "<<mi<<"MINUTES\n";
    }
};

int main()
{   int h,m;
    cout<<"Enter Hour :";
    cin>>h;
    cout<<"Enter Minutes :";
    cin>>m;
    time24 t1(h,m);
    time12 t2(t1);
    t1.display();
    t2.display();
    return 0;
}