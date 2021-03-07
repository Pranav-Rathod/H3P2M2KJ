
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
============================================================================== */

#include<iostream>
#include<string>
using namespace std;

class staff {
    int code;
    string name;
public:

    void getdata()
    {
        cout << "Enter employee code : ";
        cin >> code;
        cout << "Enter employee name : ";
        cin.ignore(); getline(cin, name);
        cout << "\n";
    }
    void putdata()
    {
        cout << "Employee name : " << name << endl << "Employee code : " << code << endl ;
    }
};

class teacher : public staff
{
    string subject, publication;
public:
    void teacher_getdata()
    {
        getdata();
        fflush(stdin);
        cout << "Enter subject : " ;
        cin >> subject;
        cout << "Enter total number of publications : " ;
        cin >> publication ;
        cout << "\n";
    }
    void teacher_putdata()
    {
        putdata();
        cout << "Subject : " << subject << endl;
        cout << "publications : " << publication << endl;
        cout << "\n";
    }
};


class officer : public staff {
    char grade;
    string posting ;
public:
    void officer_getdata()
    {
        getdata();
        fflush(stdin);
        cout << "Enter the grade : ";
        cin >> grade;
        cout << "Enter the posting : ";
        cin.ignore(); getline(cin, posting);
        cout << "\n";
    }
    void officer_putdata()
    {
        putdata();
        cout << "Officer Grade : " << grade << endl;
        cout << "Officer Posting : " << posting << endl;
        cout << "\n";
    }
};

class typist : public staff {
    int speed;
    float experience;
public:
    void typist_getdata()
    {
        getdata();
        fflush(stdin);
        cout << "Enter typing speed :- (word/second) : ";
        cin >> speed;
        cout << "Enter experience (int years) : ";
        cin >> experience ;
        cout << "\n";
    }
    void typist_putdata()
    {
        putdata();
        cout << "Typing speed ( words/second ) : " << speed << endl;
        cout << "Experience ( in years ) : " << experience << endl;
        cout << "\n";
    }
};

class casual : public typist
{
    int daily_wages;
public:

    void casual_getdata()
    {
        getdata();
        fflush(stdin);
        cout << "Enter the daily wage : " ;
        cin >> daily_wages;
        cout << "\n";
    }
    void casual_putdata()
    {
        putdata();
        cout << "Daily waged : " << daily_wages << endl;
        cout << "\n";
    }
};

class regular : public typist {
    int salary;
public:

    void regular_getdata()
    {
        getdata();
        fflush(stdin);
        cout << "Enter salary : ";
        cin >> salary;
        cout << "\n";
    }
    void regular_putdata()
    {
        putdata();
        cout << "salary : " << salary << endl;
        cout << "\n";
    }
};


int main()
{
    cout << "\n\n";

    teacher t;
    t.teacher_getdata();
    t.teacher_putdata();

    regular r;
    r.regular_getdata();
    r.regular_putdata();

    casual c;
    c.casual_getdata();
    c.casual_putdata();

    officer o;
    o.officer_getdata();
    o.officer_putdata();

    return 0;
}