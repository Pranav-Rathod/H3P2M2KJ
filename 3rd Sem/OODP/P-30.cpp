
/* =============================================================================
    Write a Program which stores name and mobile number in phonebook
    and performs following tasks:
        a) Determine the mobile number of the specified person.
        b) Determine the name of if a mobile number is known.
        c) Update the mobile number, whenever there is a change.
============================================================================== */

#include<iostream>
#include<cstring>
#include<iomanip>
#include <fstream>

using namespace std;

class Phonebook
{
    char name[20], phno[6];

public:
    void getData();
    void showData();
    char *getname() {return name;}
    char *getphno() {return phno;}
    void update(char *nm, char * telno)
    {
        strcpy(name,nm);
        strcpy(phno,telno);
    }
};

void Phonebook :: getData()
{
    cout << "\n";
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter phone Number: ";
    cin >> phno;
}

void Phonebook :: showData()
{
    cout << "\n";
    cout << "Name: " << name << endl;
    cout << "phone Number: " << phno << endl;
}

int main()
{
    Phonebook rec;
    fstream file;
    file.open("2.txt",ios::app|ios::in|ios::out);
    char ch, nm[20], telno[6];
    int choice, found = 0;

    while (1)
    {
        cout << "\n";
        cout << "1. Add \n";
        cout << "2. Display \n";
        cout << "3. Search by name  \n";
        cout << "4. Search by num  \n";
        cout << "5. Update  \n";
        cout << "6. Exit    \n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: //New Record
                rec.getData();
                cin.get(ch);
                file.write((char*)&rec,sizeof(rec));
                break;

            case 2: //Display Record
                file.seekg(0,ios::beg);
                cout << "\nRecords in PhoneBook: \n";
                while(file)
                {
                    file.read((char*)&rec,sizeof(rec));
                    if (!file.eof())
                        rec.showData();
                }
                file.clear();
                break;

            case 3: //Search Telephone Num by Name
                cout << "\nEnter name\n";
                cin >> nm;
                file.seekg(0,ios::beg);
                found = 0;

                while(file.read((char*)&rec,sizeof(rec)))
                {
                    if (strcmp(nm,rec.getname()) == 0)
                    {
                        found++;
                        rec.showData();
                    }
                }
                file.clear();
                if (found == 0)
                    cout << "\nRecord Not Found\n";
                break;

            case 4: //Search Telephone Num
                cout << "\nEnter Number\n";
                cin >> telno;
                file.seekg(0,ios::beg);
                found = 0;

                while(file.read((char*)&rec,sizeof(rec)))
                {
                    if (strcmp(telno,rec.getphno()) == 0)
                    {
                        found++;
                        rec.showData();
                    }
                }
                file.clear();
                if (found == 0)
                    cout << "\nRecord Not Found\n";
                break;

            case 5: //Update Record
                cout << "\nEnter name\n";
                cin >> nm;
                file.seekg(0,ios::beg);
                found = 0;
                int cnt = 0;

                while(file.read((char*)&rec, sizeof(rec)))
                {
                    if (strcmp(nm,rec.getname()) == 0)
                    {
                        cnt++;
                        found++;
                        break;
                    }
                }
                file.clear();
                if (found == 0)
                    cout << "\nRecord Not Found\n";
                else
                {
                    int location = (cnt-1)*sizeof(rec);
                    cout << "Enter New Telephone Number : ";
                    cin >> telno;
                    file.seekp(location);
                    rec.update(nm,telno);
                    file.write((char*)&rec, sizeof(rec));
                    file.flush();
                }
                break;
        }
    }
    file.close();
}