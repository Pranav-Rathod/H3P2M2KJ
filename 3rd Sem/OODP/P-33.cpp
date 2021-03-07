#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
    vector < pair <string,int> > n;
    string cn;
    int un;

    for (int i = 0; i <= 2; i++)
    {
        cout << "\n";
        cout << "Enter Car Model - " << i+1 << ": ";
        cin >> cn;
        cout << "Enter Car Sold No. - " << i+1 << ": ";
        cin >> un;
        n.push_back(make_pair(cn,un));
    }

    cout << "\n\n";

    for(int i = 0; i <= 2; i++)
    {
        cout << n[i].first << " " << n[i].second << "\n";
    }

    

    cout << "\n\n";

    int cost = 0, tcost = 0;
    for (int i = 0; i <= 2; i++)
    {
        cout << "\n";
        cout << "Enter Cost of Model No. " << i+1 << ": ";
        cin >> cost;
        cout << "Total Cost: ";
        cout << n[i].second*cost << "\n";
    }
}