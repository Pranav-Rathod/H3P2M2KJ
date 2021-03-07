#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,i;
    float a,b,h,OddSum=0,EvenSum=0,Ans=0;

    printf("Enter value of N : ");
    scanf("%d",&n);

    float x[n+1],y[n+1];

    printf("Enter value of A : ");
    scanf("%f",&a);

    printf("Enter value of B : ");
    scanf("%f",&b);

    for(i=0 ; i<=n ; i++)
    {
        x[i] = x[i-1] + h;
        y[i] = function(x[i]);

        printf("X[%d] = %f \t Y[%d] = %f\n",i,x[i],i,y[i]);
    }

    for(i=0 ; i<=n ; i++)
    {
        if (i%2 == 0)
            EvenSum += y[i];
        else
            OddSum += y[i];
    }

    Ans = h * (4 * OddSum) + (2 * EvenSum);

    printf("\nAnswer is : %f",Ans/3);

    return 0;
}