#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class MovieTicket
{
    int member_no, ticket_number = 0, scrCh, timeCh, m_id, age;
    int ordr_val;
    int getAge[20];
    char name[20];
    char gender;

    string getname[20], fullGender[20];
    string movieName[10]={"Angrezi Medium", "Baaghi 3", "Thappad", "Bhoot - Part 1", "Love Aaj Kal", "Malang",
                          "Shikara", "Gul Makai", "Panga", "Street Dancer 3D"};
    string screen[3] = {"Deluxe", "Premium", "Standard"};
    string movieTime[11] = {"10:00 AM", "10:30 AM", "11:30 AM", "1:00 PM", "2:15 PM", "4:00 PM", "7:00 PM", "8:30 PM",
                            "9:45 PM", "10:30 PM", "11:00 PM"};
    double amount[10];
    double screenPrice[3] = {550.00, 400.00, 200.00};
    double MoviePrice[10] = {200.00, 350.00, 100.00, 480.00, 150.00, 500.00, 750.00, 460.00, 330.00, 550.00};
    double total;


public:
    void bookOrder();
    void modifyOrder();
    void displayOrder();
    int geTicket_number(){return ticket_number;}
}mt;

void MovieTicket :: bookOrder()
{
    char timeConform, screenConform;

    screenSelection:
    system("cls");
    cout<<"\n\n-- Select your screen --\n";
    cout<<"1. Deluxe    - 550 Rs.\n";
    cout<<"2. Premium   - 400 Rs.\n";
    cout<<"3. Standard  - 200 Rs.\n\n";
    cout<<"Enter your choice: "; cin >> scrCh;

    cout << "\n\nDo you want to change your screen type? (Y/N): "; cin >> screenConform;
    if(screenConform == 'Y' || screenConform == 'y')
    {
        goto screenSelection;
    }

    TimeSelection:
    system("cls");
    cout<<"\n\n-- Select time --\n";
    cout<<"1. 10:00 AM\n";
    cout<<"2. 10:30 AM\n";
    cout<<"3. 11:30 AM\n";
    cout<<"4. 1:00 PM\n";
    cout<<"5. 2:15 PM\n";
    cout<<"6. 4:00 PM\n";
    cout<<"7. 7:00 PM\n";
    cout<<"8. 8:30 PM\n";
    cout<<"9. 9:45 PM\n";
    cout<<"10. 10:30 PM\n";
    cout<<"11. 11:00 PM\n";
    cout<<"Enter your choice: "; cin >> timeCh;

    switch (timeCh)
    {
    case 1: 
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  3"<<"\t\t\t"<<"Thappad  		        100.00 Rs."<<endl;
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1  		480.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            goto Enter_Detailes;

    case 2:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1          480.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  8"<<"\t\t\t"<<"Gul Makai		460.00 Rs."<<endl;
            goto Enter_Detailes;

    case 3:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  5"<<"\t\t\t"<<"Love Aaj Kal 	        150.00 Rs."<<endl;
            cout<<"  6"<<"\t\t\t"<<"Malang                  500.00 Rs."<<endl;
            goto Enter_Detailes;

    case 4:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  1"<<"\t\t\t"<<"Angrezi Medium	           200.00 Rs."<<endl;
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            goto Enter_Detailes;

    case 5:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  1"<<"\t\t\t"<<"Angrezi Medium	        200.00 Rs."<<endl;
            cout<<"  3"<<"\t\t\t"<<"Thappad  		100.00 Rs."<<endl;
            cout<<"  5"<<"\t\t\t"<<"Love Aaj Kal 	        150.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    case 6:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1          480.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    case 7:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  3"<<"\t\t\t"<<"Thappad  		100.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  8"<<"\t\t\t"<<"Gul Makai		460.00 Rs."<<endl;
            goto Enter_Detailes;

    case 8:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  5"<<"\t\t\t"<<"Love Aaj Kal 	        150.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    case 9:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            goto Enter_Detailes;

    case 10:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  1"<<"\t\t\t"<<"Angrezi Medium	        200.00 Rs."<<endl;
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1          480.00 Rs."<<endl;
            cout<<"  6"<<"\t\t\t"<<"Malang                  500.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            goto Enter_Detailes;

    case 11:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  8"<<"\t\t\t"<<"Gul Makai		460.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    default: cout << "\nPlease Enter Valid input...!\n\n";  system("pause");  goto TimeSelection;  break;
    }


    Enter_Detailes:

    cout << "\n\nDo you want to change your time? (Y/N): "; cin >> timeConform;
    if (timeConform == 'Y' || timeConform == 'y')
    {
        goto TimeSelection;
    }
    

    cout << "\nEnter your movie ID: "; cin >> m_id;
    cout << "\nYour Movie Name is: " << movieName[m_id-1] << endl;
    cout << "\nYour Movie Time is: " << movieTime[timeCh-1] << endl;
    cout << "Movie Price is: " << MoviePrice[m_id-1] << " Rs." << endl;
    cout << "Screen is: " << screen[scrCh-1] << endl;
    cout << "Screen Price: " << screenPrice[scrCh-1] << " Rs." << endl;


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
    total = (MoviePrice[m_id-1]*member_no)+screenPrice[scrCh-1];
    cout << "Total payable amount is: " << total << " Rs." << endl;
}


void MovieTicket::modifyOrder()
{
    char timeConform, screenConform;

    screenSelection:
    system("cls");
    cout<<"\n\n-- Select your screen --\n";
    cout<<"1. Deluxe    - 550 Rs.\n";
    cout<<"2. Premium   - 400 Rs.\n";
    cout<<"3. Standard  - 200 Rs.\n\n";
    cout<<"Enter your choice: "; cin >> scrCh;

    cout << "\n\nDo you want to change your screen type? (Y/N): "; cin >> screenConform;
    if (screenConform == 'Y' || screenConform == 'y')
    {
        goto screenSelection;
    }

    TimeSelection:
    system("cls");
    cout<<"\n\n-- Select time --\n";
    cout<<"1. 10:00 AM\n";
    cout<<"2. 10:30 AM\n";
    cout<<"3. 11:30 AM\n";
    cout<<"4. 1:00 PM\n";
    cout<<"5. 2:15 PM\n";
    cout<<"6. 4:00 PM\n";
    cout<<"7. 7:00 PM\n";
    cout<<"8. 8:30 PM\n";
    cout<<"9. 9:45 PM\n";
    cout<<"10. 10:30 PM\n";
    cout<<"11. 11:00 PM\n";
    cout<<"Enter your choice: "; cin >> timeCh;

    switch (timeCh)
    {
    case 1: 
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  3"<<"\t\t\t"<<"Thappad  		        100.00 Rs."<<endl;
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1  		480.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            goto Enter_Detailes;

    case 2:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1          480.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  8"<<"\t\t\t"<<"Gul Makai		460.00 Rs."<<endl;
            goto Enter_Detailes;

    case 3:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  5"<<"\t\t\t"<<"Love Aaj Kal 	        150.00 Rs."<<endl;
            cout<<"  6"<<"\t\t\t"<<"Malang                  500.00 Rs."<<endl;
            goto Enter_Detailes;

    case 4:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  1"<<"\t\t\t"<<"Angrezi Medium	           200.00 Rs."<<endl;
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            goto Enter_Detailes;

    case 5:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  1"<<"\t\t\t"<<"Angrezi Medium	        200.00 Rs."<<endl;
            cout<<"  3"<<"\t\t\t"<<"Thappad  		100.00 Rs."<<endl;
            cout<<"  5"<<"\t\t\t"<<"Love Aaj Kal 	        150.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    case 6:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1          480.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    case 7:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  3"<<"\t\t\t"<<"Thappad  		100.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  8"<<"\t\t\t"<<"Gul Makai		460.00 Rs."<<endl;
            goto Enter_Detailes;

    case 8:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  5"<<"\t\t\t"<<"Love Aaj Kal 	        150.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    case 9:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            goto Enter_Detailes;

    case 10:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  1"<<"\t\t\t"<<"Angrezi Medium	        200.00 Rs."<<endl;
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  4"<<"\t\t\t"<<"Bhoot - Part 1          480.00 Rs."<<endl;
            cout<<"  6"<<"\t\t\t"<<"Malang                  500.00 Rs."<<endl;
            cout<<"  9"<<"\t\t\t"<<"Panga		        330.00 Rs."<<endl;
            goto Enter_Detailes;

    case 11:
            system("cls");
            cout <<"**************************************************************************\n";
            cout<<"MOVIE ID"<<"   \t\tMOVIE NAME"<<"           MOVIE PRICE(Rupees)"<<endl;
            cout <<"**************************************************************************\n";
            cout<<"  2"<<"\t\t\t"<<"Baaghi 3  		   350.00 Rs."<<endl;
            cout<<"  7"<<"\t\t\t"<<"Shikara		        750.00 Rs."<<endl;
            cout<<"  8"<<"\t\t\t"<<"Gul Makai		460.00 Rs."<<endl;
            cout<<" 10"<<"\t\t\t"<<"Street Dancer 3D	550.00 Rs."<<endl;
            goto Enter_Detailes;

    default: cout << "\nPlease Enter Valid input...!\n\n";  system("pause");  goto TimeSelection;  break;
    }


    Enter_Detailes:

    cout << "\n\nDo you want to change your time? (Y/N): "; cin >> timeConform;
    if (timeConform == 'Y' || timeConform == 'y')
    {
        goto TimeSelection;
    }
    

    cout << "\nEnter your movie ID: "; cin >> m_id;
    cout << "\nYour Movie Name is: " << movieName[m_id-1] << endl;
    cout << "\nYour Movie Time is: " << movieTime[timeCh-1] << endl;
    cout << "Movie Price is: " << MoviePrice[m_id-1] << " Rs." << endl;
    cout << "Screen is: " << screen[scrCh-1] << endl;
    cout << "Screen Price: " << screenPrice[scrCh-1] << " Rs." << endl;


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

    cout << "\n\n";
    total = (MoviePrice[m_id-1]*member_no)+screenPrice[scrCh-1];
    cout << "Total payable amount is: " << total << " Rs." << endl << endl;
    cout << "Record is successfully modified..!" << endl;
}

void MovieTicket::displayOrder()
{
    cout<<"\n------------------Ticket Details------------------\n";
    cout<<"Ticket no                    : "<< ticket_number << endl;
    cout<<"Movie Name                   : "<< movieName[m_id-1] << endl;
    cout<<"Movie Time                   : "<< movieTime[timeCh-1] << endl;
    cout<<"Movie Price                  : "<< MoviePrice[m_id-1] << " Rs." << endl;
    cout<<"Screen Name                  : "<< screen[scrCh-1] << endl;
    cout<<"Screen Price                 : "<< screenPrice[scrCh-1] << " Rs." << endl;


    cout<<"\n      ----------   Your Details   ----------\n";
    cout<< "\n\t" << left << setw(15) << "Name" << setw(15) << "Age" << setw(15) << "Gender" << endl << endl;
    cout<<"      --------------------------------------\n";
    for (int i = 1; i <= member_no; i++)
    {
        cout<< "\t" << left << setw(15) << getname[i] << setw(15) << getAge[i] << setw(15) << fullGender[i] << endl;
    }
    cout<<"      --------------------------------------\n\n";

    cout<<"Total payable amount is.     : "<< total << " Rs." <<endl;
    cout<<"-------------------------------------------------\n";
}

void addData()
{
    ofstream fout;
    fout.open("Movie.dat",ios::binary|ios::out|ios::app);
    mt.bookOrder();
    fout.write((char*)&mt, sizeof(mt));
    fout.close();
    cout << "\nRecord added Successfully..!"<<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Movie.dat",ios::in|ios::binary);
    while(fin.read((char*)&mt, sizeof(mt)))
    {
        mt.displayOrder();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Movie.dat",ios::in|ios::binary);
    cout<<"Enter Ticket number you want to search : ";
    cin>>n;

    while(fin.read((char*)&mt, sizeof(mt)))
    {
        if(n == mt.geTicket_number())
        {
            mt.displayOrder();
            flag++;
        }
    }
    cout << "\n";
    fin.close();
    if(flag==0)
        cout<<"Ticket number "<<n<<" not found....\n\n";
}

void deleteData()
{
    int n, flag=0;
    ifstream fin;
    ofstream fout;

    fin.open("Movie.dat",ios::in|ios::binary);
    fout.open("TempMovie.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Ticket number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&mt, sizeof(mt)))
    {
        if(n == mt.geTicket_number())
        {
            cout<<"The Following Ticket number "<< n <<" has been deleted:\n";
            mt.displayOrder();
            flag++;
        }
        else
        {
            fout.write((char*)&mt, sizeof(mt));
        }
    }
    fout.close();
    fin.close();
    if(flag == 0)
        cout<<"The Order No. "<< n <<" not found....\n\n";
    remove("Movie.dat");
    rename("TempMovie.dat","Movie.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Movie.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Ticket number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&mt, sizeof(mt)))
    {
        pos = fio.tellg();
        if(n == mt.geTicket_number())
        {
            cout<<"Following Ticket number "<< n <<" will be Changed:\n";
            mt.displayOrder();
            cout<<"\n\nNow Enter the New Details....\n\n";
            mt.modifyOrder();
            fio.seekg(pos-sizeof(mt));
            fio.write((char*)&mt, sizeof(mt));
            flag++;
        }
    }
    fio.close();

    if(flag == 0)
        cout<< "Ticket number " << n << " not found....!\n\n";
}


int main()
{
    int ch;
    while (1)
    {
        system("cls");
        cout<<"\n"<<"\n";
        cout<<"\t\t\t  Movie Management System \n";
        cout<<"\t\t==============================================\n\n";
        cout<<"\t\t\t1. Create new Movie Booking    \n";
        cout<<"\t\t\t2. Display the order           \n";
        cout<<"\t\t\t3. Search Order                \n";
        cout<<"\t\t\t4. Delete Order                \n";
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
            case 6: exit(0);
            default: cout << "Please enter valid input..!";
        }
        system("pause");
    }
}