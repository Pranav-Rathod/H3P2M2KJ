
/* =============================================================================
    Program to perform matrix addition.
============================================================================== */

#include<iostream>
using namespace std; 

int main()
{
    int i,j,a[2][2],b[2][2],sum[2][2];

    cout<<"Enter elements of	1st matrix\n";	
    for(i=0;i<2;i++)		
    {		
        for(j=0;j<2;j++)		
        {		
            cout << "Enter element a ["	<< i + 1 <<"] ["<<	j	+	1	<<	"]:	";
            cin >> a[i][j];							
        }							
    }

    cout<<"Enter elements of	2nd matrix\n";						
    for(i=0;i<2;i++)							
    {							
        for(j=0;j<2;j++)							
        {							
            cout << "Enter element a ["	<< i + 1 <<"] ["<<	j	+	1	<<	"]:	";
            cin >> b[i][j];							
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"\nSum of a and b is \n"; 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout << "Element a [" << i + 1 <<"] ["<< j + 1 << "]: "; cout << sum[i][j]<<"\t\n";
            cout << "\n";
        }
    }
    cout<<"\n";
}