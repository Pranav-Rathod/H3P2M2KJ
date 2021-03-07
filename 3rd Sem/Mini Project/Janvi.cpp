#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

class Pharmacy
{
    int quantity;
    int med_no;
    int ordr_number = 0;
    int ordr_val;
    char name[20];
    char date[11];
    char gender;
    string medicineName[10]={"Probiotics","Vitamin C(500mg)","Acid Free C(500mg)","Women'S Multivate","Marino Tablet","Maxi Cal Tablet",
                             "Amino Zinc Tablet","Burnex","Fabuloss 5","Royal Propollen"};
    double amount[10];
    double Medicine[10] = {200.00,350.00,100.00,480.00,150.00,500.00,750.00,460.00,330.00,550.00};
    double total;
public:
    void getData();
    void modifyData();
    void showData();
    int getordr_number(){return ordr_number;}
}p;

void Pharmacy::getData()
{
    int i;

    for (int k= 0; k < 10; k++)
    {
        if (amount[k] != NULL)
        {   amount[k] = 0;  }
    }

    if(total != 0)
    {
        total = 0;
    }


    cout <<"**************************************************************************\n";
    cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(Rupees)"<<endl;
    cout <<"**************************************************************************\n";
    cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			200.00 Rs."<<endl;
    cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		350.00 Rs."<<endl;
    cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		100.00 Rs."<<endl;
    cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		480.00 Rs."<<endl;
    cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	150.00 Rs."<<endl;
    cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		500.00 Rs."<<endl;
    cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		750.00 Rs."<<endl;
    cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			460.00 Rs."<<endl;
    cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			330.00 Rs."<<endl;
    cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		550.00 Rs."<<endl;
    cout<<" "<<endl;

    cout << "Enter Your Gender (M/F): ";
    cin >> gender;
    cout<< "Enter Customer Name: ";
    cin.ignore(); cin.getline(name,20);
    cout<<"Enter D.O.B: ";
    cin.getline(date,11);

    cout<<"\n===== Maximum is 10 order for each transaction =====\n";
    cout << "How many Medicine would you like to order: ";
    cin >> ordr_val;

    if (ordr_val > 10)
    {
        cout << "\nThe Medicine you order is exceed the maximum amount of order...!" << endl;
        system("pause");
    }
    else
    {
        for (i=0; i<ordr_val; i++)
        {
            cout << "\nPlease enter your selection : ";
            cin >> med_no;
            cout << "\nMedicine Name: " << medicineName[med_no-1] << endl << "Price is: " << Medicine[med_no-1] << " Rs." << endl;
            cout << "\nHow many medicine do you want: ";
            cin >> quantity;
            cout << "The amount You need to pay is: " << Medicine[med_no-1]*quantity <<" Rs." << endl;
            amount[med_no-1] = Medicine[med_no-1]*quantity;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        total += amount[j];
    }
    ordr_number++;
}

void Pharmacy::modifyData()
{
    int i;

    for (int k= 0; k < 10; k++)
    {
        if (amount[k] != NULL)
        {   amount[k] = 0;  }
    }

    if(total != 0)
    {
        total = 0;
    }

    cout <<"**************************************************************************\n";
    cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(Rupees)"<<endl;
    cout <<"**************************************************************************\n";
    cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			200.00 Rs."<<endl;
    cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		350.00 Rs."<<endl;
    cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		100.00 Rs."<<endl;
    cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		480.00 Rs."<<endl;
    cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	150.00 Rs."<<endl;
    cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		500.00 Rs."<<endl;
    cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		750.00 Rs."<<endl;
    cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			460.00 Rs."<<endl;
    cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			330.00 Rs."<<endl;
    cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		550.00 Rs."<<endl;
    cout<<" "<<endl;

    cout << "Enter Your Gender (M/F): ";
    cin >> gender;
    cout<< "Enter Customer Name: ";
    cin.ignore(); cin.getline(name,20);
    cout<<"Enter D.O.B: ";
    cin.getline(date,11);

    cout<<"\n===== Maximum is 10 order for each transaction =====\n";
    cout << "How many Medicine would you like to order: ";
    cin >> ordr_val;

    if (ordr_val > 10)
    {
        cout << "\nThe Medicine you order is exceed the maximum amount of order...!" << endl;
        system("pause");
    }
    else
    {
        for (i=0; i<ordr_val; i++)
        {
            cout << "\nPlease enter your selection : ";
            cin >> med_no;
            cout << "\nMedicine Name: " << medicineName[med_no-1] << endl << "Price is: " << Medicine[med_no-1] << " Rs." << endl;
            cout << "\nHow many medicine do you want: ";
            cin >> quantity;
            cout << "The amount You need to pay is: " << Medicine[med_no-1]*quantity <<" Rs." << endl;
            amount[med_no-1] = Medicine[med_no-1]*quantity;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        total += amount[j];
    }
}

void Pharmacy::showData()
{
    cout<<"\n------------------Order Details------------------\n";
    cout<<"Order no                     : "<< ordr_number <<endl;
    cout<<"Customer Name                : "<< name <<endl;
    cout<<"Gender                       : "<< gender <<endl;
    cout<<"D.O.B.                       : "<< date <<endl;
    cout<<"Number of medicine           : "<< ordr_val <<endl;
    cout<<"Total payable amount is.     : "<< total << " Rs." <<endl;
    cout<<"-------------------------------------------------\n";
}

void addData()
{
    ofstream fout;
    fout.open("Pharmacy.dat",ios::binary|ios::out|ios::app);
    p.getData();
    fout.write((char*)&p,sizeof(p));
    fout.close();
    cout << "\nOrder Taken Successfully"<<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Pharmacy.dat",ios::in|ios::binary);
    while(fin.read((char*)&p,sizeof(p)))
    {
        p.showData();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Pharmacy.dat",ios::in|ios::binary);
    cout<<"Enter Order Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&p,sizeof(p)))
    {
        if(n==p.getordr_number())
        {
            p.showData();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"The Order No. "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("Pharmacy.dat",ios::in|ios::binary);
    fout.open("TempPhar.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Order Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&p,sizeof(p)))
    {
        if(n == p.getordr_number())
        {
            cout<<"The Following Order No. "<< n <<" has been deleted:\n";
            p.showData();
            flag++;
        }
        else
        {
            fout.write((char*)&p,sizeof(p));
        }
    }
    fout.close();
    fin.close();
    if(flag == 0)
        cout<<"The Order No. "<< n <<" not found....\n\n";
    remove("Pharmacy.dat");
    rename("TempPhar.dat","Pharmacy.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Pharmacy.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Order Number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&p,sizeof(p)))
    {
        pos = fio.tellg();
        if(n == p.getordr_number())
        {
            cout<<"Following Order No. "<< n <<" will be Changed:\n";
            p.showData();
            cout<<"\n\nNow Enter the New Details....\n";
            p.modifyData();
            fio.seekg(pos-sizeof(p));
            fio.write((char*)&p,sizeof(p));
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
            case 6: cout << "\n\n\nThank You For Using This Program.....\n\n" << endl; exit(0); break;
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
    return 0;
}