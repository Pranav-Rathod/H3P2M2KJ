#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int,10> arr1 = { 2, 4, 6, 8, 10, 12, 14 };
    cout << arr1.at(2) << endl;
    cout << arr1.at(4) << endl;
}