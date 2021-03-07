#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int factorial(int n)
{ 
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

float NrCal(float val, int n)
{
    float tamp = val;
    for (int i = 1; i < n; i++)
    {
        tamp = tamp * (val - i);
    }
    return tamp;
}

void main()
{
    int n,j,k,i,h;
    float sum,nr,dr,p,z;
    
    system("cls");
    printf("Enter Value of N : ");
    scanf("%d",&n);

    float x[20],y[20][20];

    for (i = 0; i < n; i++)
    {
        printf("Enter Value of x[%d] and y[%d] : ",i,i);
        scanf("%f%f",&x[i],&y[i][0]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n-i; j++)
        {
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("\n %f\t%f",x[i],y[i][0]);
        for (j = 1; j < n-i; j++)
        {
            printf("\t%f",y[i][j]);
        }
    }

    sum = y[0][0];
    printf("\n\nEnter Value of x : ");
    scanf("%f",&z);

    h = x[1]-x[0];
    p = z-x[0]/h;

    for(i = 1; i < n; i++)
    {
        sum = sum + (NrCal(p,i)/factorial(i))*y[0][i];
    }
    printf("\n\nValue is : %f",sum);
}