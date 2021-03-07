
/* =============================================================================
    Write a program that reads data from one file and copy it to other file.
============================================================================== */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char File1[20], File2[20], ch;
    ifstream in_file;
    ofstream out_file;
    
    cout << "\nEnter File Name of File To be Copy: ";
    cin >> File1;
    cout << "\nEnter File Name of File where To Copy: ";
    cin >> File2;

    in_file.open(File1,ios::in);
    if (!in_file)
    {
        cout << "\nError While Opening File..!\n";
    }
    
    out_file.open(File2,ios::app);
    if (!out_file)
    {
        cout << "\nError While Opening Destination File..!\n";
    }

    while (in_file.get(ch))
    {
        out_file.put(ch);
    }
    in_file.close();
    out_file.close();
}