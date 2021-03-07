#include<iostream>
#include<fstream>

using namespace std;

class e_bill
{
    int c_no=0;
    char c_name[20];
    int units;
    double bill;
public:
    void get();
    void modify();
    void show();
    int getCno(){return c_no;}
}e;

void e_bill :: get()
{
    cout<<"\nEnter Details of Customer Below : ";
    cout<<"\nEnter Customer Name : "; cin.ignore(); cin.getline(c_name,20);
    cout<<"\nEnter No. of Units used : "; cin>>units;
    if(units<=100)
        bill = units*1.20;
    else if(units<=300)
        bill = 100*1.20+(units-100)*2;
    else
        bill = 100*1.20+200*2+(units-300)*3;
    c_no++;
}

void e_bill :: modify()
{
    cout<<"\nEnter Details of Customer Below : ";
    cout<<"\nEnter Customer Name : "; cin.ignore(); cin.getline(c_name,20);
    cout<<"\nEnter No. of Units used : "; cin>>units;
    if(units<=100)
        bill = units*1.20;
    else if(units<=300)
        bill = 100*1.20+(units-100)*2;
    else
        bill = 100*1.20+200*2+(units-300)*3;
}

void e_bill :: show()
{
    cout<<"\n\n\nEntered Details of Customer are : ";
    cout<<"\nCustomer No. is          : " << c_no;
    cout<<"\nCustomer Name is         : " << c_name;
    cout<<"\nNumber of Units Consumed : " << units << " Pts.";
    cout<<"\nBill of Customer         : " << bill << " Rs." << "\n\n";
}

void addData()
{
    ofstream fout;
    fout.open("EBill.dat",ios::binary|ios::out|ios::app);
    e.get();
    fout.write((char*)&e,sizeof(e));
    fout.close();
    cout << "\nBill Successfully Generated, Go to display section to view." <<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("EBill.dat",ios::in|ios::binary);
    while(fin.read((char*)&e,sizeof(e)))
    {
        e.show();
        cout << "\n";
    }
    fin.close();
    cout << "\nAll Bills Successfully Displayed." <<endl;
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("EBill.dat",ios::in|ios::binary);
    cout<<"Enter Order Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&e,sizeof(e)))
    {
        if(n==e.getCno())
        {
            e.show();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"Sorry, Customer No. "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("EBill.dat",ios::in|ios::binary);
    fout.open("TempBill.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Customer Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&e,sizeof(e)))
    {
        if(n == e.getCno())
        {
            cout << "\nBill Deleted...!\n\n";
            tout.write((char*)&e,sizeof(e));
            flag++;
        }
        else
        {
            fout.write((char*)&e,sizeof(e));
        }
    }
    fout.close();
    tout.close();
    fin.close();
    if(flag == 0)
        cout<<"Customer No. "<< n <<" not found....\n\n";
    remove("EBill.dat");
    rename("TempBill.dat","EBill.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("EBill.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Customer Number : ";
    cin>>n;

    while(fio.read((char*)&e,sizeof(e)))
    {
        pos = fio.tellg();
        if(n == e.getCno())
        {
            cout<<"\n\nNow Enter the New Details....\n";
            e.modify();
            fio.seekg(pos-sizeof(e));
            fio.write((char*)&e,sizeof(e));
            flag++;
        }
    }
    fio.close();

    if(flag == 0)
        cout<< "The Order No. " << n << " not found....!\n\n";
}

int main()
{
    int ch;
    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t  Electricity Bill Management System \n";
        cout<<"\t\t==============================================\n\n";
        cout<<"\t\t\t1. Create New Bill             \n";
        cout<<"\t\t\t2. Display Bills               \n";
        cout<<"\t\t\t3. Search Bill                 \n";
        cout<<"\t\t\t4. Delete Bill                 \n";
        cout<<"\t\t\t5. Modify Bill                 \n";
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
            case 6: cout << "\n\n\nThank You For Using This Program.....\n\n" << endl; exit(0); break;
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}