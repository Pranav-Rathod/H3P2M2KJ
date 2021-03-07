
/* =============================================================================
    Write a program that reads data from one file and copy it to other file.
============================================================================== */

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    char p1[80], read[80], ch;
    ofstream ofile("source.txt",ios::app);
    ifstream ifile("source.txt");
    ofstream ofile1("copy.txt");

    do
    {
        cout << "\nEnter Lines: ";
        gets(p1);
        ofile << endl;
        ofile << p1;

        cout << "\nYou Want to continue(Y/N)? ";
        cin >> ch;
        gets(p1);
    } while (ch == 'y' || ch == 'Y');
    
    while (1)
    {
        while (ifile.getline(read,80))
        {
            if (ifile.eof() != 0)
            {
                break;
            }
            cout << read << endl;
            ofile1 << read << endl;
        }
    }
    
    ifile.close();
    ofile1.close();
    return 0;
}