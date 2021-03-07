
/* =============================================================================
    Write a function templates for finding the minimum value contained in an
    array.
============================================================================== */

#include<iostream>
using namespace std;

template<class T>

T minimumm(T a[], int size)
{
    T no = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] < no)
        {
            no = a[i];
        }
    }
    return no;
}

int main()
{
    cout << "\n\n";
    int set1[] = { 6, 5, 9, 16, 17, 19 };
    cout << "Minimum Number is: " << minimumm(set1,6) << endl;

    cout << "\n";
    float set2[] = { 9.6, 2.3, 7.8, 20.7, 17.7, 19.1 };
    cout << "Minimum Number is: " << minimumm(set2,6) << endl;
    cout << "\n";
}