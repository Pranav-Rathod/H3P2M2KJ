#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<fstream>

using namespace std;

class BookshopManagement
{
    int quantity;
    int book_quantity[20];
    int book_no;
    int user_id;
    int book_ordr;
    char name[20];
    char date[15];
    char gender;

    string getbookName[20];
    string bookName[20]={
                            "In Search of Lost Time            ",
                            "Ulysses                           ",
                            "Don Quixote                       ",
                            "The Great Gatsby                  ",
                            "One Hundred Years of Solitude     ",
                            "War and Peace                     ",
                            "Hamlet                            ",
                            "The Catcher in the Rye            ",
                            "The Odyssey                       ",
                            "The Brothers Karamazov            ",
                            "Madame Bovary                     ",
                            "The Divine Comedy                 ",
                            "The Adventures of Huckleberry Finn",
                            "Alice's Adventures in Wonderland  ",
                            "Pride and Prejudice               ",
                            "Wuthering Heights                 ",
                            "To the Lighthouse                 ",
                            "Catch-22                          ",
                            "The Sound and the Fury            ",
                            "Nineteen Eighty Four              "
                        };

    string author_name[20]={
                            "Marcel Proust          ",
                            "James Joyce            ",
                            "Miguel de Cervantes    ",
                            "F. Scott Fitzgerald    ",
                            "Gabriel Garcia Marquez ",
                            "Leo Tolstoy            ",
                            "William Shakespeare    ",
                            "J.D. Salinger          ",
                            "Homer                  ",
                            "Fyodor Dostoyevsky     ",
                            "Gustave Flaubert       ",
                            "Dante Alighieri        ",
                            "Mark Twain             ",
                            "Lewis Carroll          ",
                            "Jane Austen            ",
                            "Emily Brontë           ",
                            "Virginia Woolf         ",
                            "Joseph Heller          ",
                            "William Faulkner       ",
                            "George Orwell          "
                            };
    string getauthor_name[20];

    double amount[20];
    double book_amount[20], total_amt_perBook[20];
    double Book[20] = { 120.00, 170.00, 260.00, 140.00, 150.00, 250.00, 160.00, 130.00,
                        180.00, 380.00, 250.00, 210.00, 430.00, 100.00, 300.00, 190.00,
                        180.00, 360.00, 230.00, 160.00  };
    double total;
    
public:
    void getBookRecord();
    void showBookRecord();
    int getordr_number(){return user_id;}
}b;


void BookshopManagement::getBookRecord()
{
    int i;

    if(total != 0)
    {
        total = 0;
    }

    cout<<"*****************************************************************************\n";
    cout<<"BOOK ID                      BOOK NAME                        BOOK PRICE(Rs.)"<<endl;
    cout<<"*****************************************************************************\n";
    cout<<"   1"   <<"\t\t"<<"    In Search of Lost Time                "<<"	120.00 Rs."<<endl;
    cout<<"   2"   <<"\t\t"<<"    Ulysses                               "<<"	170.00 Rs."<<endl;
    cout<<"   3"   <<"\t\t"<<"    Don Quixote                           "<<"	260.00 Rs."<<endl;
    cout<<"   4"   <<"\t\t"<<"    The Great Gatsby                      "<<"	140.00 Rs."<<endl;
    cout<<"   5"   <<"\t\t"<<"    One Hundred Years of Solitude         "<<"	150.00 Rs."<<endl;
    cout<<"   6"   <<"\t\t"<<"    War and Peace                         "<<" 	250.00 Rs."<<endl;
    cout<<"   7"   <<"\t\t"<<"    Hamlet                                "<<"	160.00 Rs."<<endl;
    cout<<"   8"   <<"\t\t"<<"    The Catcher in the Rye                "<<"	130.00 Rs."<<endl;
    cout<<"   9"   <<"\t\t"<<"    The Odyssey                           "<<"	180.00 Rs."<<endl;
    cout<<"  10"   <<"\t\t"<<"    The Brothers Karamazov                "<<"	380.00 Rs."<<endl;
    cout<<"  11"   <<"\t\t"<<"    Madame Bovary                         "<<"	250.00 Rs."<<endl;
    cout<<"  12"   <<"\t\t"<<"    The Divine Comedy                     "<<"	210.00 Rs."<<endl;
    cout<<"  13"   <<"\t\t"<<"    The Adventures of Huckleberry Finn    "<<"	430.00 Rs."<<endl;
    cout<<"  14"   <<"\t\t"<<"    Alice's Adventures in Wonderland      "<<"	100.00 Rs."<<endl;
    cout<<"  15"   <<"\t\t"<<"    Pride and Prejudice                   "<<"	300.00 Rs."<<endl;
    cout<<"  16"   <<"\t\t"<<"    Wuthering Heights                     "<<"	190.00 Rs."<<endl;
    cout<<"  17"   <<"\t\t"<<"    To the Lighthouse                     "<<"	180.00 Rs."<<endl;
    cout<<"  18"   <<"\t\t"<<"    Catch-22                              "<<"	360.00 Rs."<<endl;
    cout<<"  19"   <<"\t\t"<<"    The Sound and the Fury                "<<"	230.00 Rs."<<endl;
    cout<<"  20"   <<"\t\t"<<"    Nineteen Eighty Four                  "<<"	160.00 Rs."<<endl;
    cout<<"*****************************************************************************\n";
    cout<<" "<<endl;

    cout << "Enter Your ID: ";
    cin >> user_id;
    cout<<"Enter Today's Date: ";
    cin.ignore(); cin.getline(date,15);
    cout<< "Enter Your Name: ";
    cin.getline(name,20);
    cout << "Enter Your Gender(M/F): ";
    cin >> gender;

    cout<<"\n===== Maximum limit is 20 per order or per transaction =====\n";
    cout << "How many Book would you like to order: ";
    cin >> book_ordr;

    if (book_ordr > 20)
    {
        cout << "\nyour order is exceed the maximum amount of order...!" << endl;
        system("pause");
    }
    else
    {
        for (i=0; i < book_ordr; i++)
        {
            cout << "\nPlease enter your selection : ";
            cin >> book_no;
            cout << "\nBook Name: " << bookName[book_no - 1] << endl << "Author of book: " << author_name[book_no - 1] << endl << "Price is: " << Book[book_no - 1] << " Rs." << endl;
            cout << "\nHow many Book do you want: ";
            cin >> quantity;
            cout << "The amount You need to pay is: " << Book[book_no - 1] * quantity << " Rs." << endl;
			amount[i] = Book[book_no - 1] * quantity;
        }
    }


    if (gender == 'm' || gender == 'M')
    {    gender = 'M';   }
    else if (gender == 'f' || gender == 'F')
    {    gender = 'F';  } else {}

    for (int j = 0; j < 20; j++)
    {
        total += amount[j];
    }
    cout << "\n";
}

void BookshopManagement::showBookRecord()
{
    cout << "\n--------------------------Order Details--------------------------\n";
    cout << "Customer no                  : "<< user_id << endl;
    cout << "Customer Name                : "<< name <<endl;
    cout << "Gender                       : "<< gender <<endl;
    cout << "Date when book issued        : "<< date <<endl;
    cout << "Total no. of book            : "<< book_ordr << endl;
    cout << "Total payable amount is.     : "<< total << " Rs." <<endl;
    cout<<"-----------------------------------------------------------------\n";
}

void addData()
{
    ofstream fout;
    fout.open("Book.dat",ios::binary|ios::out|ios::app);
    b.getBookRecord();
    fout.write((char*)&b, sizeof(b));
    fout.close();
    cout << "\nOrder Taken Successfully"<<endl;
}

void displayData()
{
    ifstream fin;
    fin.open("Book.dat",ios::in|ios::binary);
    while(fin.read((char*)&b, sizeof(b)))
    {
        b.showBookRecord();
        cout << "\n";
    }
    fin.close();
}

void searchData()
{
    int n, flag=0;
    ifstream fin;
    fin.open("Book.dat",ios::in|ios::binary);
    cout<<"Enter Order Number you want to search : ";
    cin>>n;

    while(fin.read((char*)&b, sizeof(b)))
    {
        if(n == b.getordr_number())
        {
            b.showBookRecord();
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

    fin.open("Book.dat",ios::in|ios::binary);
    fout.open("TempBook.dat",ios::out|ios::app|ios::binary);

    cout<<"Enter Order Number you want to delete: ";
    cin>>n;

    while(fin.read((char*)&b, sizeof(b)))
    {
        if(n == b.getordr_number())
        {
            cout<<"The Following Order No. "<< n <<" has been deleted:\n";
            b.showBookRecord();
            tout.write((char*)&b, sizeof(b));
            flag++;
        }
        else
        {
            fout.write((char*)&b, sizeof(b));
        }
    }
    fout.close();
    tout.close();
    fin.close();
    if(flag == 0)
        cout<<"The Order No. "<< n <<" not found....\n\n";
    remove("Book.dat");
    rename("TempBook.dat","Book.dat");
}

void modifyData()
{
    int n, flag=0, pos;
    fstream fio;

    fio.open("Book.dat",ios::in|ios::out|ios::binary);

    cout<<"Enter Order Number you want to Modify : ";
    cin>>n;

    while(fio.read((char*)&b, sizeof(b)))
    {
        pos = fio.tellg();
        if(n == b.getordr_number())
        {
            cout<<"Following Order No. "<< n <<" will be Changed:\n";
            b.showBookRecord();
            cout<<"\n\nNow Enter the New Details....\n";
            b.getBookRecord();
            fio.seekg(pos-sizeof(b));
            fio.write((char*)&b, sizeof(b));
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
        cout<<"\t\t\t    Book Management System \n";
        cout<<"\t\t---------------------------------------------\n";
        cout<<"\t\t\t1. Take new order              \n";
        cout<<"\t\t\t2. Display order               \n";
        cout<<"\t\t\t3. Search order                \n";
        cout<<"\t\t\t4. Delete order                \n";
        cout<<"\t\t\t5. Modify Order                \n";
        cout<<"\t\t\t6. Exit                        \n";
        cout<<"\t\t---------------------------------------------\n";
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
            case 6: exit(0); break;
            default: cout << "Please enter valid input..!"; break;
        }
        system("pause");
    }
    return 0;
}