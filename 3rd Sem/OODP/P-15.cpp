
/* =============================================================================
    Define a Class “bank_account” having following data members and
    member functions:
    Data members :
        1. Name of the depositor
        2. Account number
        3. Type of account
        4. Balance amount in the account
    Member functions :
        1. To assign the initial values
        2. To deposit an amount
        3. To withdraw an amount after checking the balance
        4. To display name and balance
    Write a main program to test the program for 10 customers.
============================================================================== */

#include<iostream>
using namespace std;

class bank_account
{
    char name[50];
	int ac_num;
	char type[10];
	int balance;

public:
	void init();
	void deposit(int);
	void withdraw(int);
	void display(int);
};

void bank_account::init()
{
    cout << "Enter Your Name: ";
    cin.ignore();
    cin.getline(name,29);
    cin.ignore();

    cout << "\nEnter Type Of Account : ";
    cin.getline(type,9);
    cin.ignore();

    cout << "\nEnter Account Number: ";
    cin >> ac_num;
    cin.ignore();

    cout << "\nEnter Current Balance: ";
    cin >> balance;
    cin.ignore();
}

void bank_account::deposit(int t1)
{
    if(ac_num  == t1)
    {
        int a;
        cout << "\nEnter Amount To Deposit: ";
        cin >> a;
        balance = balance + a;
        cout << "\nAfter Deposit, Balance is: " << balance;
    }
}

void bank_account::withdraw(int t1)
{
    if(ac_num  == t1)
    {
        int a;
        cout << "\nYour Current Balance is: " << balance;
        cout << "\nEnter Amount To Withdraw: ";
        cin >> a;
        if(balance < a)
        {
            cout << "\nNot Enough Balance\n";
        }
        else
        {
            balance = balance - a;
            cout << "\nAfter withdraw, Balance is: " << balance;
        }
    }
}

void bank_account::display(int t1)
{
    if(ac_num == t1)
    {
        cout <<"\nName:"<<name<<"\nBalance :"<<balance<<endl;
    }
}

int main()
{
    int n,ch;
    cout << "\nEnter Number Of Customer :";
    cin >> n;
    cin.ignore();
    bank_account b[n];
    int i,t1;

    for(i=0 ; i<n ; i++)
    {
        cout << "\n\nAccount Holder " << i+1 << " Details :\n";
        b[i].init();
    }

    while(1)
    {
        cout << "\n Select What You Want To Do.?";
        cout << "\n 1. Deposite";
        cout << "\n 2. Withdraw";
        cout << "\n 3. View Details";
        cout << "\n 4. Exit";

        cout << "\n Enter Your Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1: cout << "\nEnter Account Number :";
                    cin >> t1;
                    for(i=0 ; i<n ;i++)
                    {
                        b[i].deposit(t1);
                    }
                    break;

             case 2: cout << "\nEnter Account Number :";
                    cin >> t1;
                    for(i=0 ; i<n ;i++)
                    {
                        b[i].withdraw(t1);
                    }
                    break;

             case 3: cout << "\nEnter Account Number :";
                    cin >> t1;
                    for(i=0 ; i<n ;i++)
                    {
                        b[i].display(t1);
                    }
                    break;

             case 4: exit(0); break;

             default: cout << "\nInvalid Choice\n";
        }
    }
    return 0;
}