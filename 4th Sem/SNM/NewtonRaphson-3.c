#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return(pow(x,3)-x-11);
}

float derivation(float x)
{
    return(3*pow(x,2)-1);
}

void main()
{
    float a,e,l=1,x0,x1;

    system("cls");
    printf("Enter Value of initial guess : ");
    scanf("%f",&x0);
    printf("Enter Decimal accuracy : ");
    scanf("%f",&e);
    
    while (l >= e)
    {
        x1 = x0 - (f(x0)/derivation(x0));
        printf("\nThe Value Of Root : %f",x1);

        l = fabs(x0-x1);
        x0 = x1;
    }

    printf("\n\nFinal Value Of Root : %f",x1);
}