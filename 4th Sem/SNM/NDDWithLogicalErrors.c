#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n,i,j;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    
    float x[n],y[n][n],a,nr=1,dr=1;

    for( i=0;i<n;i++)
    { 
        printf("\nEnter the value of x[%d] and Y[%d]: ",i,i);
        scanf("%f%f",&x[i],&y[i]);
    }

    printf("\nEnter the value of x:");
    scanf("%d",&a);
  
    for ( i = 1; i < n; i++) 
    { 
            for ( j = 0; j < n - i; j++)
            {
                nr =(y[j + 1][i - 1] - y[j][i - 1]);
                dr = (x[j+1]-x[j]);
                y[j][i] = ;
            }
    }

    for(i = 0; i < n; i++)
    { 
        printf("\n %f\t%f",x[i],y[i][0]);
        for ( j = 1; j < n - (i); j++)
        {
            printf("\t%f",y[i][j]);
        }
    }

    float sum = 0; 

    for (int i = 1; i < n; i++)
    { 
   		nr = nr*(a-x[i]); 
        sum = sum + (nr * y[i][0]); 
    } 

   printf("\n When x = %f, corresponding y = %f\n",a,sum);
   return 0;
}
