
/* =============================================================================
    Demonstrate Runtime Polymorphism by defining media class as Base class
    and Book and Tape as Sub Class. Keep display() function such that, It
    provides run time polymorphism.
============================================================================== */

#include<iostream>
using namespace std;

class media 
{
public:
  //virtual void Display() = 0;             // With "Pure virtual" Function, body part will not be in P.V.F.
    virtual void Display()                  // With "virtual" Function, it contain body part.
    {
        cout << "Media\n";
    }
};

class Book : public media
{
public:
    void Display(){
        cout << "Book\n";
    }
};

class Tape : public media
{
public:
    void Display(){
        cout << "Tape\n";
    }
};

int main()
{
    media M;        /* With Virtual Function, object of base class is required.
                       in Pure Virtual Function Only pointer are allowed. We Cannot
                       Create Object of That Class while it is in Pure Virtual Function.   */
    Book B;
    Tape T;

    media *mptr;
    mptr = &M;      // This Line also should remove while using Pure Virtual Function.
    cout << "\nmptr is now points to media class" << endl;
    mptr->Display();

    cout << "\nmptr is now points to Book class" << endl;
    mptr = &B;
    mptr->Display();

    cout << "\nmptr is now points to Tape class" << endl;
    mptr = &T;
    mptr->Display();
}