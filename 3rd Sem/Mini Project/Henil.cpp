#include<iostream>
#include<cstdio>
#include<fstream>

using namespace std;

class bird
{
    int code = 0;
    char name[90],loc[90],col[90],nat[90];
    float liv;

public:
    void get();
    void view();
    int getBirdNo(){return code;}
}b;

void bird :: get()
{
    cout<<"Enter the bird name: ";
    cin.ignore(); cin.getline(name,90);
    cout<<"What the color it possesses: ";
    cin.getline(col,90);
    cout<<"It's nature: ";
    cin.getline(nat,90);
    cout<<"Where found: ";
    cin.getline(loc,90);
    cout<<"Living duration: ";
    cin>>liv;
    code++;
}

void bird :: view()
{
    cout<<"\n";
    cout<<"\nCode       : "<<code;
    cout<<"\nBird's name: "<<name;
    cout<<"\nColour     : "<<col;
    cout<<"\nNature     : "<<nat;
    cout<<"\nLocation   : "<<loc;
    cout<<"\nLive       : "<<liv<<" year";
    cout<<"\n";
}

void addData()
{
    ofstream fout;
    fout.open("Bird.dat",ios::out|ios::app|ios::binary);
    b.get();
    fout.write((char*)&b,sizeof(b));
    fout.close();
    cout << "\nRecord saved Successfully" << endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Bird.dat",ios::in|ios::binary);
    while(fin.read((char*)&b,sizeof(b)))
    {
        b.view();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Bird.dat",ios::in|ios::binary);
    cout<<"Enter bird code you want to search : ";
    cin>>n;

    while(fin.read((char*)&b,sizeof(b)))
    {
        if(n==b.getBirdNo())
        {
            b.view();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"The bird code "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("Bird.dat",ios::in|ios::binary);
    fout.open("TempBird.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter bird code you want to delete: ";
    cin>>n;

    while(fin.read((char*)&b,sizeof(b)))
    {
        if(n == b.getBirdNo())
        {
            cout<<"The Following bird code "<< n <<" has been deleted:\n";
            b.view();
            flag++;
        }
        else
        {
            fout.write((char*)&b,sizeof(b));
        }
    }
    fout.close();
    fin.close();
    if(flag == 0)
        cout<<"The bird code "<< n <<" not found....\n\n";
    remove("Bird.dat");
    rename("TempBird.dat","Bird.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Bird.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter bird code you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&b,sizeof(b)))
    {
        pos = fio.tellg();
        if(n == b.getBirdNo())
        {
            cout<<"Following bird code "<< n <<" will be Changed:\n";
            b.view();
            cout<<"\n\nNow Enter the New Details....\n";
            b.get();
            fio.seekg(pos-sizeof(b));
            fio.write((char*)&b,sizeof(b));
            flag++;
        }
    }
    fio.close();

    if(flag == 0)
        cout<< "The bird code " << n << " not found....!\n\n";
}

int main()
{
    int ch;
    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t\t  Pharmacy Management System \n";
        cout<<"\t\t==============================================\n\n";
        cout<<"\t\t\t1. Take new Medicine order     \n";
        cout<<"\t\t\t2. Display the order           \n";
        cout<<"\t\t\t3. Search Medicine order       \n";
        cout<<"\t\t\t4. Delete Medicine order       \n";
        cout<<"\t\t\t5. Modify Order                \n";
        cout<<"\t\t\t6. Exit                        \n\n";
        cout<<"\t\t----------------------------------------------\n";
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
            case 6: cout << "\n\n\nThank You For Using This Program.....\n\n" << endl; exit(0);
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}