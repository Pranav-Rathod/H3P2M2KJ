#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<int> lst;
    list<int> :: iterator it;

    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i);
    }

    cout << "\n\n";
    
    cout << "List is : " << endl;

    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\ninsert value front : " << endl;
    lst.push_front(20);
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\ninsert value end : " << endl;
    lst.push_back(40);
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\ninsert value end : " << endl;
    lst.push_back(8);
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\nRemove value front : " << endl;
    lst.pop_front();
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\nRemove value end : " << endl;
    lst.pop_back();
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\nReverse List is : " << endl;
    lst.reverse();
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";

    cout << "\nSorted List is : " << endl;
    lst.sort();
    for (it = lst.begin() ; it != lst.end() ; it++)
    {
        cout << *it << " ";
    }

    cout << "\n\n";
}