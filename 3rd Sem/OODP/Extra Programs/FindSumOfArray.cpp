#include<iostream>
using namespace std;

int main()
{
    int n = 6, temp, i;
    int a[] = { 2, 3, 9, 8, 49, 50 };

    for(i = 0; i < n; i++)
    {
        temp += a[i];
    }

    cout << "Sum of array is: " << temp;
}