#include<iostream>

using namespace std;

int main()
{
    int x = 25;
    int y = 0;
    double z = 0;

    try
    {
        if (y != 0)
        {
            z = x/y;
            cout << "Div is: " << z;
        }
        else
        {
            throw y;
        }
    }
    catch(int m)
    {
        cout << "Exception Detected..!" << endl;
    }
}