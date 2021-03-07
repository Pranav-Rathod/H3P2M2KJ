#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class Bus
{
    int member_no, ticket_number = 0, busCh, place_id, age;
    int getAge[20];
    char name[20];
    char gender;

    string getname[20], fullGender[20];
    string source = "Rajkot";

    double kiloMetre[18] = {440.3, 152.7, 204.9, 217.3, 217.5, 248.5, 264.1,
                            402.4, 409.1, 412.4, 418.7, 420.0, 426.2, 426.3,
                            498.0, 521.5, 523.8, 545.3};

    double placePrice[18] = {500.00, 125.00, 173.00, 180.00, 180.00, 200.00, 440.00,
                             445.00, 450.00, 455.00, 462.00, 467.00, 469.00, 469.00,
                             525.00, 550.00, 559.00, 570.00};

    string destinationPlace[18]={"Dhule", "Bhavnagar", "Ahmedabad", "Nadiad", "Gandhinagar", "Vadodara",
                                 "Surat", "Mirpur Khas", "Bhiwandi", "Thana", "Kalyan", "Hyderabad", "Bombay",
                                 "Ambarnath", "Jodhpur", "Ujjain", "Indore", "Dewas"};

    string busType[5] = {"Sleeper (AC)", "Sleeper (Non-AC)", "Seater  (AC)", "Seater  (Non-AC)", "Regular"};
    double busTypePrice[5] = {550.00, 400.00, 450.00, 300.00, 200.00};
    double total;


public:
    void bookTicket();
    void showTicket();
    int geTicket_number(){return ticket_number;}
}bus;

void Bus::bookTicket()
{
    system("cls");

    cout<<"\n\n-- Select your type of bus --\n\n";
    cout<<"1. Sleeper (AC)       - 550 Rs.\n";
    cout<<"2. Sleeper (Non-AC)   - 400 Rs.\n";
    cout<<"3. Seater  (AC)       - 450 Rs.\n";
    cout<<"4. Seater  (Non-AC)   - 300 Rs.\n";
    cout<<"5. Regular            - 200 Rs.\n\n";
    cout<<"Enter your choice: "; cin >> busCh;

    system("cls");

    cout << "*******************************************************\n";
    cout << "PLACE NO" << "\t    PLACE NAME" << "\t\tFARE PRICE(Km)" << endl;
    cout << "*******************************************************\n";
    cout << "0001" << setw(25) <<"Dhule"           << setw(20) << "500.00 Rs." <<endl;
    cout << "0002" << setw(25) <<"Bhavnagar"       << setw(20) << "125.00 Rs." <<endl;
    cout << "0003" << setw(25) <<"Ahmedabad"       << setw(20) << "173.00 Rs." <<endl;
    cout << "0004" << setw(25) <<"Nadiad"          << setw(20) << "180.00 Rs." <<endl;
    cout << "0005" << setw(25) <<"Gandhinagar"     << setw(20) << "180.00 Rs." <<endl;
    cout << "0006" << setw(25) <<"Vadodara"        << setw(20) << "200.00 Rs." <<endl;
    cout << "0007" << setw(25) <<"Surat"           << setw(20) << "440.00 Rs." <<endl;
    cout << "0008" << setw(25) <<"Mirpur Khas"     << setw(20) << "445.00 Rs." <<endl;
    cout << "0009" << setw(25) <<"Bhiwandi"        << setw(20) << "450.00 Rs." <<endl;
    cout << "0010" << setw(25) <<"Thana"           << setw(20) << "455.00 Rs." <<endl;
    cout << "0011" << setw(25) <<"Kalyan"          << setw(20) << "462.00 Rs." <<endl;
    cout << "0012" << setw(25) <<"Hyderabad"       << setw(20) << "467.00 Rs." <<endl;
    cout << "0013" << setw(25) <<"Bombay"          << setw(20) << "469.00 Rs." <<endl;
    cout << "0014" << setw(25) <<"Ambarnath"       << setw(20) << "469.00 Rs." <<endl;
    cout << "0015" << setw(25) <<"Jodhpur"         << setw(20) << "525.00 Rs." <<endl;
    cout << "0016" << setw(25) <<"Ujjain"          << setw(20) << "550.00 Rs." <<endl;
    cout << "0017" << setw(25) <<"Indore"          << setw(20) << "559.00 Rs." <<endl;
    cout << "0018" << setw(25) <<"Dewas"           << setw(20) << "570.00 Rs." <<endl;
    cout << " "<<endl;


    cout<<"\nSelect place number: ";
    cin >> place_id;

    cout << "\n";
    cout << "Source place           : " << source << endl;
    cout << "Destination place      : " << destinationPlace[place_id - 1] << endl;
    cout << "Fare Price is          : " << placePrice[place_id - 1] << " Rs." << endl;
    cout << "Bus type is            : " << busType[busCh - 1] << endl;
    cout << "Price of bus type      : " << busTypePrice[busCh - 1] << " Rs." << endl;


    cout<<"\n===== Select number of member =====\n";
    cout<<"\nNOTE: More then 20 Members are not allowed.\n\n";

    cout<<"Please Select number of member: ";
    cin >> member_no;

    if (member_no > 20)
    {
        cout << "Sorry, You are going beyond the limits of booking..!";
    }
    else
        for (int j = 1; j <= member_no; j++)
        {
            cout<< "\nEnter Person "<< j <<" Name: ";
            cin.ignore(); cin.getline(name,20);
            getname[j] = name;
            cout << "Enter Person "<< j <<" Gender(M/F): ";
            cin >> gender;
            cout << "Enter Person "<< j <<" age: ";
            cin >> age;
            getAge[j] = age;

            if (gender == 'm' || gender == 'M')
            { fullGender[j] = "Male";}
            else if (gender == 'f' || gender == 'F')
            { fullGender[j] = "Female";}
            else{}
        }

    ticket_number++;

    cout << "\n\n";
    total = (placePrice[place_id - 1] * member_no) + busTypePrice[busCh - 1];
    cout << "Total payable amount is: " << total << " Rs." << endl;
}

void Bus::showTicket()
{
    cout<<"\n------------------Ticket Details------------------\n";
    cout << "Ticket no                    : " << ticket_number << endl;
    cout << "Bus Type                     : " << busType[busCh - 1] << endl;
    cout << "Bus Type Price               : " << busTypePrice[busCh - 1] << " Rs." << endl;
    cout << "Place                        : " << source << " --> " << destinationPlace[place_id - 1] << endl;
    cout << "Distance (Km)                : " << kiloMetre[place_id - 1] << endl;
    cout << "Fare Price                   : " << placePrice[place_id - 1] << " Rs." << endl;


    cout<<"\n      ----------   Your Details   ----------\n";
    cout<< "\n\t" << left << setw(15) << "Name" << setw(15) << "Age" << setw(15) << "Gender" << endl << endl;
    cout<<"      --------------------------------------\n";
    for (int i = 1; i <= member_no; i++)
    {
        cout<< "\t" << left << setw(15) << getname[i] << setw(15) << getAge[i] << setw(15) << fullGender[i] << endl;
    }
    cout<<"      --------------------------------------\n\n";

    cout<<"Total payable amount is.     : " << total << " Rs." <<endl;
    cout<<"-------------------------------------------------\n";
}

void addData()
{
    ofstream fout;
    fout.open("Bus.dat",ios::binary|ios::out|ios::app);
    bus.bookTicket();
    fout.write((char*)&bus, sizeof(bus));
    fout.close();
    cout << "\nTicket Generated Successfully"<<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Bus.dat",ios::in|ios::binary);
    while(fin.read((char*)&bus, sizeof(bus)))
    {
        bus.showTicket();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Bus.dat",ios::in|ios::binary);
    cout<<"Enter Ticket Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&bus, sizeof(bus)))
    {
        if(n == bus.geTicket_number())
        {
            bus.showTicket();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"The Ticket No. "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout,tout;

    fin.open("Bus.dat",ios::in|ios::binary);
    fout.open("TempBus.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Ticket Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&bus, sizeof(bus)))
    {
        if(n == bus.geTicket_number())
        {
            cout<<"The Following Ticket No. "<< n <<" has been deleted:\n";
            bus.showTicket();
            tout.write((char*)&bus, sizeof(bus));
            flag++;
        }
        else
        {
            fout.write((char*)&bus, sizeof(bus));
        }
    }
    fout.close();
    tout.close();
    fin.close();
    if(flag == 0)
        cout<<"The Ticket No. "<< n <<" not found....\n\n";
    remove("Bus.dat");
    rename("TempBus.dat","Bus.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Bus.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Ticket Number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&bus, sizeof(bus)))
    {
        pos = fio.tellg();
        if(n == bus.geTicket_number())
        {
            cout<<"Following Order No. "<< n <<" will be Changed:\n";
            bus.showTicket();
            cout<<"\n\nNow Enter the New Details....\n";
            bus.bookTicket();
            fio.seekg(pos-sizeof(bus));
            fio.write((char*)&bus, sizeof(bus));
            flag++;
        }
    }
    fio.close();

    if(flag == 0)
        cout<< "The Ticket No. " << n << " not found....!\n\n";
}


int main()
{
    int ch;
    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t\t    Bus Management System \n";
        cout<<"\t\t==============================================\n\n";
        cout<<"\t\t\t1. Create new Ticket Booking   \n";
        cout<<"\t\t\t2. Display the records         \n";
        cout<<"\t\t\t3. Search record               \n";
        cout<<"\t\t\t4. Delete record                \n";
        cout<<"\t\t\t5. Modify record                \n";
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
            case 6: exit(0);
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}
