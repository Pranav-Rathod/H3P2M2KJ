
/* =============================================================================
    Write a class template to represent a generic vector. Include the member
    functions to perform the following tasks:
        a) To create a vector.
        b) To modify the value of given element.
        c) To multiply by a scalar value.
============================================================================== */

#include<iostream>
using namespace std;

template<class T>

class vector
{
    T a[5];

    public:

    vector()
    {
        for (int i = 0; i < 5; i++)
        {
            a[i] = 0;
        }
    }

    vector(T n[])
    {
        for (int i = 0; i < 5; i++)
        {
            a[i] = n[i];
        }
    }

    T multiply(T val)
    {
        for (int i = 0; i < 5; i++)
        {
            a[i] *= val;
        }
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << a[i] << endl;
        }
    }
};

int main()
{
//  int a[] = { 6, 5, 9, 16, 17 };
    float b[] = { 3.6, 5.6 ,4.9 ,7.4 ,5.9 };

 /* vector<int> v1;
    vector<int> v2(a);  */

    vector<float> v1;
    vector<float> v2(b);

    v1.multiply(3);
    v1.display();

    v2.multiply(4);
    v2.display();

    return 0;
}