
/* =============================================================================
      Program to make a calculator which performs following operations:
    -	Addition
    -	Subtraction
    -	Multiplication
    -	Division
    -	Modulo
============================================================================== */

# include <iostream>
using namespace std;

int add(int a, int b)
{   return a+b; }

int sub(int a, int b)
{   return a-b; }

int mul(int a, int b)
{   return a*b; }

int division(int a, int b)
{   return a/b; }

int mod(int a, int b)
{   return a%b; }


int main()
{
    char op;
    int a, b;
    cout << "Enter two Number: "; cin >> a >> b;
    cout << "Enter operator either +, -, *, /, % : "; cin >> op;
    switch(op)
    {
        case '+':
                cout << "Addition is: " << add(a,b);
                break;

        case '-':
                cout << "Subtraction is: " << sub(a,b);
                break;

        case '*':
                cout << "Multiplication is: " << mul(a,b);
                break;

        case '/':
                cout << "Division is: " << division(a,b);
                break;

        case '%':
                cout << "Modulo is: " << mod(a,b);
                break;

        default:
                cout << "Error! Please Enter Valid input"; break;
    }
    return 0;
}