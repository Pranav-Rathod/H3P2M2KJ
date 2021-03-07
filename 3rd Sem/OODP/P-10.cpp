
/* =============================================================================
    Write a Function called zeroSmaller() that is passed two int argument by
    reference and then set the smaller of the two numbers to 0. Write a main
    () to call this function.
============================================================================== */

#include<iostream>
using namespace std;

void zero_small(int &a, int &b)
{
	if(a<b)
		a=0;
	else
		b=0;
}

int main()
{
	int x,y;
	cout<<"Enter first number : ";
	cin>>x;
	cout<<"Enter second number : ";
	cin>>y;
	zero_small(x,y);
	cout<<"First number is : "<<x;
	cout<<"\nSecond number is : "<<y;
    return 0;
}