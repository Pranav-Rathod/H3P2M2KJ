
/* =============================================================================
    Create a class FLOAT that contains one float data member. Overload all
    the four arithmetic operators(+, -, *, /) so that they operate on the objects
    of FLOAT. 
============================================================================== */

#include<iostream>
using namespace std;

class FLOAT
{
	float f;
    
    public:
		FLOAT()
		{
			f = 0;
		}
		
		FLOAT(float a)
		{
			f = a;
		}

        FLOAT operator+ (FLOAT);
        FLOAT operator- (FLOAT);
        FLOAT operator* (FLOAT);
        FLOAT operator/ (FLOAT);

        void show()
        {
            cout << f << endl;
        }
};
		
        FLOAT FLOAT :: operator+(FLOAT ob2)
        {
            FLOAT ob3;
            ob3.f = f + ob2.f;
            return (ob3);
        }

        FLOAT FLOAT :: operator-(FLOAT ob2)
        {
            FLOAT ob3;
            ob3.f = f - ob2.f;
            return (ob3);
        }

        FLOAT FLOAT :: operator*(FLOAT ob2)
        {
            FLOAT ob3;
            ob3.f = f * ob2.f;
            return (ob3);
        }

        FLOAT FLOAT :: operator/(FLOAT ob2)
        {
            FLOAT ob3;
            ob3.f = f / ob2.f;
            return (ob3);
        }


int main()
{
	FLOAT ob1(9.0);
	FLOAT ob2(3.0);
	FLOAT ob3;
	
    cout << endl << endl << endl;

	ob3 = ob1 + ob2;
	cout<<"Using Addition = ";
	ob3.show();
    cout << endl;

    ob3 = ob1 - ob2;
	cout<<"Using Subtraction = ";
	ob3.show();
    cout << endl;
	
	ob3 = ob1 * ob2;
	cout<<"Using Multiplication = ";
	ob3.show();
    cout << endl;
	
	ob3 = ob1 / ob2;
	cout<<"Using Division = ";
	ob3.show();
    cout << endl;

    return 0;
}