#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

/*float function(float val)
{
    return val/sqrt(2+pow(val,2));
}*/

/*float function(float val)
{
    return exp(val);
}*/

float function(float val)
{
    return exp(-pow(val,2));
}

int main()
{
    int n,i;
    float a,b,h,sum=0,Ans=0;

    printf("Enter value of N : ");
    scanf("%d",&n);

    float x[n+1],y[n+1];


    printf("Enter value of A : ");
    scanf("%f",&a);

    printf("Enter value of B : ");
    scanf("%f",&b);

    h = (b - a)/n;
    printf("\nValue of H : %f\n",h);

    x[0] = a;
    y[0] = function(x[0]);
    printf("\nX[%.2f] = %.2f \t y[%.2f] = %.2f\n",x[0],a,y[0],y[0]);


    for(i=1 ; i<n+1 ; i++)
    {
        x[i] = x[i-1] + h;
        y[i] = function(x[i]);

        printf("X[%d] = %f \t Y[%d] = %f\n",i,x[i],i,y[i]);
    }

    for (i=1 ; i < n ; i++)
    {
        sum += y[i];
        printf("\ny[%d] = %f",i,y[i]);
    }

    Ans = h * (y[0]+y[n+1]) + (2*sum);

    printf("\nAnswer is : %f",Ans/2);

    return 0;
}