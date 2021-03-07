
/* =============================================================================
    Create two classes DM and DB which store the value of distances. DM
    stores distance in meters and centimeters and DB in feet and inches. Write
    a program that can read values for the class objects and add one object of
    DM with another object of DB by keeping following in mind.
        a. Use friendly function to carry out the addition.
        b. The object that stores the results may be a DM or DB object,
    Depending on the unit in which the results are required.
============================================================================== */

#include<iostream>
using namespace std;
class dm;
class db
{
    float feet, inches;
    public:
    void init()
    {
        cout<<"Enter feet :";
        cin>>feet;
        cout<<"\nEnter inches :";
        cin>>inches;
    }
    void display()
    {
        cout<<"\nAfter addition :\nfeet = "<<feet<<endl;
        cout<<"\nAfter addition :\ninches = "<<inches<<endl;
    }
    friend db add(dm,db);
};

class dm
{
    float meter, centi;
    public:
    void init()
    {
        cout<<"Enter meters :";
        cin>>meter;
        cout<<"Enter centi :";
        cin>>centi;
    }
    friend db add(dm,db);
};

db add(dm ob1,db ob2)
{
    db ob;
    ob.feet = ob2.feet + (ob1.meter*3.3);
    ob.inches = ob2.inches + (ob1.centi*0.39);
    ob.feet = ob.feet + ((int)ob.inches/12);
    ob.inches = (int)ob.inches % 12;
    return(ob);
}

int main()
{
    dm ob1;
    db ob2;
    db ib2,ob3;
    ob1.init();
    ob2.init();
    ob3=add(ob1,ob2);
    ob3.display();
    return 0;
}