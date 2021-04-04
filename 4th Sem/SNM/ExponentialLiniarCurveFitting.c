#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


int main()
{
    int n, i;
    float x[10], y[10];
    float sumX=0, sumX2=0, sumY=0, sumXY=0;
    float a, b, A, B;

    system("cls");

    printf("Value of N : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("x[%d] , y[%d] = ",i,i);
        scanf("%f%f", &x[i], &y[i]);
    }

    for(i=1;i<=n;i++)
    {
        sumX = sumX + x[i];
        sumX2 = sumX2 + x[i]*x[i];
        sumY = sumY + log(y[i]);
        sumXY = sumXY + x[i]*log(y[i]);
    }

    B = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    A = (sumY - B*sumX)/n;

    a = exp(A);
    b = exp(B);

    printf("\n\na : %0.2f \nb : %0.2f",a,b);

    return 0;
}