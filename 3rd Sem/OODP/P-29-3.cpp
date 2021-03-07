
/* =============================================================================
    Write a program that reads data from one file and copy it to other file.
============================================================================== */

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];
    ofstream outfile;

    cout << "\n\n";

    outfile.open("main.txt", ios::app);

    cout << "Enter your data: ";
    fflush(stdin);

    cin.getline(data, 100);
    outfile << data << endl;
    outfile.close();

    ifstream infile;
    infile.open("main.txt", ios::in);
    outfile.open("temp.txt", ios ::app);

    while (!infile.eof())
    {
        infile.read((char *)data, sizeof(data));
        outfile.write((char *)data, sizeof(data));
    }

    infile.close();
    outfile.close();
    return 0;
}