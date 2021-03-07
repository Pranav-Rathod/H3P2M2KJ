
/* =============================================================================
    Write a program that reads a text file and create another file that is
    identical except that every sequence of consecutive blank spaces is
    replaced by a single space.
============================================================================== */

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch1, ch2;
    ofstream file1_out("text");
    file1_out << "My University name                is     marwadi         university.";
    file1_out.close();

    ofstream file2_out("copy");
    ifstream file1_in("text");
    ch1 = file1_in.get();

    while (!file1_in.eof())
    {
        ch2 = file1_in.get();
        while (ch1 == ' ' && ch2 == ' ')
        {
            ch1 = ch2;
            ch2 = file1_in.get();
        }
        file2_out << ch1;
        ch1 = ch2;
    }
    file1_in.close();
    file2_out.close();

    cout << "\n\n";
    ifstream file2_in("copy");
    while (!file2_in.eof())
    {
        ch1 = file2_in.get();
        cout << ch1;
    }
    cout << "\n\n";

    file2_in.close();
    return 0;
}