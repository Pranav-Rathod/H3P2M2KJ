#include<iostream>
#include<fstream>
#include<cstring>
#include<regex>
#include<windows.h>
#include<process.h>
#include<ctime>
#define POSITIVE(n) ((n) < 0 ? 0 - (n) : (n))

using namespace std;

class Color
{
    int color;
    HANDLE consoleHandle;

public:
    Color(int desiredColor)
    {
        consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        color = desiredColor;
    }
    friend ostream &operator<<(ostream &ss, Color obj)
    {
        SetConsoleTextAttribute(obj.consoleHandle, obj.color);
        return ss;
    }
};

class Bold
{
private:
    string const &s;
public:
    Bold(string const &s) : s(s) {}

    friend ostream &operator<<(ostream &os, Bold const &b)
    {
        os << "\x1b[1m" << b.s << "\x1b[0m";
        return os;
    }
};

class Student
{
    int admno;
    char name[20], date[20], Sname[20], Fname[20];
    char gender;
    int std;
    int dd,mm,yyyy,hr,min,sec;
    float m_hindi, m_guj, m_eng, m_math, m_science, m_comp;
    float percentage, total;
    char grade;
    char phone_number[11], mail[50];
    string fullGender, feedback, status;

public:
    void getData();
    void showData();
    void modifyData();
    int getAdmno(){return admno;}

    Student();
    Student(int);
}s;

Student::Student() {}
Student::Student(int val)
{
    admno = val;
}

bool isNumber(string str)
{
    for (int i = 0; i < 10; i++)
        if (isdigit(str[i]) == false)
            return false;

    return true;
}

bool DOB(string date)
{
    const regex match(R"(\b(\d?\d)[-|.|/](\d{2}|\d{1})[-|.|/]((19|20)\d{2})\b)");   //Before Raw String Literal: "(\\b(\\d?\\d)[-|.|/](\\d{2}|\\d{1})[-|.|/]((19|20)\\d{2})\\b)"
    return regex_match(date,match);                                                 //After Raw String Literal:  R"(\b(\d?\d)[-|.|/](\d{2}|\d{1})[-|.|/]((19|20)\d{2})\b)"
}

bool Email(string mail)
{
    const regex pattern(R"((\w+)(\.(\w+))?(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    return regex_match(mail,pattern);
}

void Student::modifyData()
{
    cout << Color(11) << Bold("\n\n... Enter Student Details ...\n\n");
    cout<<"Enter Surname           : "; cin.ignore(); cin.getline(Sname,20);
    cout<<"Enter Name              : "; cin.getline(name,20);
    cout<<"Enter Father's Name     : "; cin.getline(Fname,20);

    Dob:
    cout<<"Enter D.O.B.            : "; cin.getline(date,20);
    if(!DOB(date))
    {cout << Color(4) << Bold("\nSorry, Your D.O.B isn't valid. Please Enter it again..!\n\n"); goto Dob;}

    EMAIL:
    cout<<"Enter Email             : "; cin.getline(mail,50);
    if(!Email(mail))
    {cout << Color(4) << Bold("\nSorry, Your E-Mail ID isn't valid. Please Enter it again..!\n\n"); goto EMAIL;}


    Gender:
    cout<<"Enter Gender (M/F/T)    : "; cin>>gender;
    if (gender == 'm' || gender == 'M')
    {    fullGender = "Male";   }
    else if (gender == 'f' || gender == 'F')
    {    fullGender = "Female";  }
    else if (gender == 't' || gender == 'T')
    {    fullGender = "Transgender";  } else {cout << Color(4) << Bold("\nPlease Enter valid gender...!\n\n"); goto Gender;    }

    MobileNo:
    cout<<"Enter Your Mobile no    : "; cin>>phone_number;
    if ((strlen(phone_number) != 10) || (!isNumber(phone_number)))
    {   cout << Color(4) << Bold("\nPlease Enter valid Mobile number (Exactly 10 Digit)...!\n\n"); goto MobileNo;    }

    Standard:
    cout<<"Enter Standard          : "; cin>>std;
    if (std > 12 || std <= 0)
    {   cout << Color(4) << Bold("\nPlease Enter valid Standard...!\n\n"); goto Standard;    }

    Marks:
    cout << Color(11) << Bold("\n\t----- Now Enter Your Marks -----\n\n");
    cout<<"Enter Maths Marks       : "; cin>>m_math;
    cout<<"Enter Science Marks     : "; cin>>m_science;
    cout<<"Enter English Marks     : "; cin>>m_eng;
    cout<<"Enter Computer Marks    : "; cin>>m_comp;
    cout<<"Enter Hindi Marks       : "; cin>>m_hindi;
    cout<<"Enter Gujarati Marks    : "; cin>>m_guj;
    cout<<endl;
    total = m_guj + m_hindi + m_math + m_science + m_eng + m_comp;
    percentage = total*100/600;

    if (m_math > 100.00 || m_science > 100.00 || m_eng > 100.00 || m_hindi > 100.00 || m_guj > 100.00 || m_comp > 100.00)
    {    cout << Color(4) << Bold("\nYour Marks are exceed the limit. Please Enter Your Marks Again...! (Under 100 or Maximum 100)\n\n"); goto Marks;     }


    if (percentage <= 100 && percentage > 90)
    {    grade = 'A';   feedback = "Excellent";   status = "Pass";   }
    else if (percentage <= 90 && percentage > 75)
    {    grade = 'B';   feedback = "Awsome";  status = "Pass";  }
    else if (percentage <= 75 && percentage > 60)
    {    grade = 'C';   feedback = "Very Good";   status = "Pass";  }
    else if (percentage <= 60 && percentage > 45)
    {    grade = 'D';   feedback = "Good";   status = "Pass";   }
    else if (percentage <= 45 && percentage > 30)
    {    grade = 'E';   feedback = "Need more practice";   status = "Pass"; }
    else
    {    grade = 'F';   feedback = "-";   status = "Fail"; }

    time_t now = time(0);
    tm *ltm = localtime(&now);

    dd = ltm->tm_mday;
    mm = 1 + ltm->tm_mon;
    yyyy = 1900 + ltm->tm_year;

    if(ltm->tm_hour <= 12)
    {
       hr = ltm->tm_hour;
    } else
    {
       hr = POSITIVE(12-ltm->tm_hour);
    }
    min = ltm->tm_min;
    sec = ltm->tm_sec;
}

void Student::getData()
{
    modifyData();

    admno++;
    cout << Color(9) << Bold("\nKindly note your application number");
    cout << "\nYour Application Number is : " << Color(6) << admno << endl;
    cout << Color(2) << Bold("\nYour Application is successfully registered..!\n");
}

void Student::showData()
{
    cout << Color(15) << Bold("\n\t---------------- Student Details ----------------\n");
    cout<<"\t  Application no               : "<< Color(6) << admno << Color(7) <<endl;
    cout<<"\t  Date                         : "<< dd << "/" << mm << "/" << yyyy << endl;
    cout<<"\t  Time                         : "<< hr << ":" << min << ":" << sec << endl;
    cout << Color(15) << Bold("\t       -------------------------------------\n");
    cout<<"\t  Student Name                 : "<< name <<endl;
    cout<<"\t  Student's Surname            : "<< Sname <<endl;
    cout<<"\t  Student's Father name        : "<< Fname <<endl;
    cout<<"\t  Date of birth                : "<< date <<endl;
    cout<<"\t  Gender                       : "<< fullGender <<endl;
    cout<<"\t  Mobile no                    : "<< phone_number <<endl;
    cout<<"\t  Email                        : "<< mail <<endl;
    cout<<"\t  Standard                     : "<< std << endl;
    cout << Color(15) << "\t\t   ------- "<< Color(10) << name << Color(7) << "'s Marks -------\n";
    cout<<"\t  Maths                        : "<< m_math << endl;
    cout<<"\t  Science                      : "<< m_science << endl;
    cout<<"\t  English                      : "<< m_eng << endl;
    cout<<"\t  Computer                     : "<< m_comp << endl;
    cout<<"\t  Hindi                        : "<< m_hindi << endl;
    cout<<"\t  Gujarati                     : "<< m_guj << endl;
    cout << Color(15) << Bold("\t       -------------------------------------\n");
    cout<<"\t  Paas/Fail                    : "<< Color(6) << status << Color(7) << endl;
    cout<<"\t  Total Marks                  : "<< total << " out of 600" << endl;
    cout<<"\t  Percentage                   : "<< percentage << " %" << endl;
    cout<<"\t  Grade                        : "<< grade << endl;
    cout<<"\t  Feedback                     : "<< feedback << endl;
    cout << Color(15) << Bold("\t--------------------------------------------------\n");
}

void setAdmno()
{
    int n=0, flag = 0;
    ifstream fin;
    fin.open("Student.dat",ios::in|ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        n++;
        if(n==s.getAdmno())
        {
            flag = n;
        }
    }
    Student s(flag);
}

void addData()
{
    setAdmno();
    ofstream fout;
    fout.open("Student.dat",ios::binary|ios::out|ios::app);
    s.getData();
    fout.write((char*)&s,sizeof(s));
    fout.close();
}

void displayData()
{
    ifstream fin;
    fin.open("Student.dat",ios::in|ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.showData();
        cout << "\n";
    }
    fin.close();
    cout << Color(2) << Bold("\nAll applications are successfully displayed...!") << endl << endl;
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Student.dat",ios::in|ios::binary);
    cout<<"Enter Order Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&s,sizeof(s)))
    {
        if(n==s.getAdmno())
        {
            s.showData();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"\nApplication No. " << Color(6) << n << Color(7) << " not found...!\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("Student.dat",ios::in|ios::binary);
    fout.open("TempStudent.dat",ios::out|ios::app|ios::binary);
    tout.open("TrashStudent.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Application Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&s,sizeof(s)))
    {
        if(n == s.getAdmno())
        {
            cout<<"\nThe Following Order No. "<< n <<" has been deleted:\n";
            s.showData();
            tout.write((char*)&s,sizeof(s));
            flag++;
        }
        else
        {
            fout.write((char*)&s,sizeof(s));
        }
    }
    fout.close();
    tout.close();
    fin.close();
    if(flag == 0)
        cout<<"\nApplication No. " << Color(6) << n << Color(7) << " not found...!\n\n";
    remove("Student.dat");
    rename("TempStudent.dat","Student.dat");
}

void getTrash()
{
    ifstream fin;
    fin.open("TrashStudent.dat",ios::in|ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.showData();
    }
    fin.close();
    cout << Color(2) << Bold("\n\nAll applications are successfully displayed from Trash file...!\n") << endl << endl;
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Student.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Application Number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&s,sizeof(s)))
    {
        pos = fio.tellg();
        if(n == s.getAdmno())
        {
            cout<<"Following Application No. "<< n <<" will be Changed:\n";
            s.showData();
            cout<<"\n\nNow Enter the New record....\n";
            s.modifyData();
            fio.seekg(pos-sizeof(s));
            fio.write((char*)&s,sizeof(s));
            flag++;
        }
    }
    fio.close();

    cout << Color(2) << Bold("\nYour Application is successfully modified..!\n");

    if(flag == 0)
        cout<<"\nApplication No. " << Color(6) << n << Color(7) << " not found...!\n\n";
}


int main()
{
    int ch;

    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t\t\t         Student Database Management System \n";
        cout<<"\t\t\t\t----------------------------------------------------\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   1. Enter new record                          ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   2. Display records                           ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   3. Search record                             ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   4. Delete record                             ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   5. Modify record                             ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   6. Display Deleted Records from Trash file   ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t||   7. Exit                                      ||\n";
        cout<<"\t\t\t\t||                                                ||\n";
        cout<<"\t\t\t\t----------------------------------------------------\n\n";
        cout<<"Enter choice: ";
        cin>>ch;
        system("cls");

        switch(ch)
        {
            case 1: addData(); break;
            case 2: displayData(); break;
            case 3: searchData(); break;
            case 4: deleteData(); break;
            case 5: modifyData(); break;
            case 6: getTrash(); break;
            case 7: exit(0);
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}