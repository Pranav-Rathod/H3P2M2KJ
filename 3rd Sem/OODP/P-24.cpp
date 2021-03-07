
/* =============================================================================
    Implement following class relationship and test with main class.

                                Staff (Code,Name)
                            /           |          \
                           /            |           \
                          /             |            \
           Teacher (Subject,         Typist         Officer (Grade)
                Publication)         (Speed)
                                    /       \
                                   /         \
                                Regular     Casual (daily wages)

    Add education details for above classes except for typist. This class will
    include two information namely, highest education in general studies and
    highest professional qualification.
============================================================================== */

#include<iostream>
#include<string>
using namespace std;

class staff
{
    int code;
    string name;

public:
    void getdata()
    {
        cout << "Enter your Name: " << endl;
        cin >> name;
        cout << "Enter Staff code: " << endl;
        cin >> code;
    }
    void putdata()
    {
        cout << "Name is: " << name << endl << "Code is: " << code << endl;
    }
};

class qualification
{
    string Heigested;
    string HeiP;

public:
    void qgetdata()
    {
        cout << "Enter Education: " << endl;
        cin >> Heigested;
        cout << "Enter Highest Professional Qualification: " << endl;
        cin >> HeiP;
    }
    void qputdata()
    {
        cout << "Education is: " << Heigested << endl;
        cout << "Highest Professional qualification is: " << HeiP << endl;
    }
};

class teacher : public staff, public qualification
{
    string subject;
    int publication;

public:
    void tgetdata()
    {
        getdata();
        cout << "Enter the subject: " << endl;
        cin >> subject;
        cout << "Enter number of Publications: " << endl;
        cin >> publication;
        qgetdata();
    }
    void tdisplay()
    {
        putdata();
        cout << "Subject is: "<< subject << endl << "Number of publications are: " << publication << endl;
        qputdata();
    }
};

class officer : public staff, public qualification
{
    int grade;
    string Heigested;
    string HeiP;

public:
    void ogetdata()
    {
        getdata();
        cout << "Enter the grade of officer" << endl;
        cin >> grade;
        qgetdata();
    }
    void odisplay()
    {
        putdata();
        cout << "Grade is :"<< grade << endl;
        qputdata();
    }
};

class Typest : public staff
{
    int speed;

public:
    void Tgetdata()
    {
        getdata();
        cout << "Enter the speed in words per minute :" << endl;
        cin >> speed;
    }
    void Tdisplay()
    {
        putdata();
        cout << "Speed is "<< speed << endl;
    }
};

class Regular : public Typest
{
public:

    void Rgetdata()
    {
        Tgetdata();
    }
    void Rdisplay()
    {
        Tdisplay();
    }
};

class casual : public Typest
{
  int day;
  int wage;

public:
    void cgetdata()
    {
        Tgetdata();
        cout << "Enter days" << endl;
        cin >> day;
        cout << "Enter wage" << endl;
        cin >> wage;
    }
    void cdisplay()
    {
        Tdisplay();
        cout << "Daily wages is : " << day*wage<< endl;
    }
};

main()
{
    int ch;
    char ch2;
    cout << "Is it teacher typist or officer ??" << endl;
    cout << "1 for Teacher\n2 for Typist\n3 for Officer" << endl;
    cin >> ch;

    if (ch==1)
    {
        cout << "Entering for teacher" << endl;
        teacher t;
        t.tgetdata();
        t.tdisplay();
    }

    if (ch==2) 
    {
        cout << "Entering for typest" << endl;
        cout << "Is is 1 regular or 2 casual [1/2]?" << endl;
        cin >> ch2;
        if (ch2==1)
        {
            Regular r;
            r.Rgetdata();
            r.Rdisplay();
        }
        if (ch2==2)
        {
            casual c;
            c.cgetdata();
            c.cdisplay();
        }
    }

    if (ch==3)
    {
        cout << "Entering for officer" << endl;
        officer o;
        o.ogetdata();
        o.odisplay();
    }
  return 0;
}