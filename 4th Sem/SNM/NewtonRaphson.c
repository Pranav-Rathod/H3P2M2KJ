#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return((3*x)-cos(x)-1);
}

float derivation(float x)
{
    return(3+sin(x));
}

void main()
{
    int i=1,itr;
    float a,b,Xn,fxn,dervFxn,finalEque;

    system("cls");
    printf("Enter Value of A : ");
    scanf("%f",&a);
    printf("Enter Value of B : ");
    scanf("%f",&b);
    printf("Enter Number of itration : ");
    scanf("%d",&itr);

    Xn = (a+b)/2;

    printf("\n");
    printf("Xn : %f",Xn);
    printf("\n\n");
    printf("   Itrations\t   X(n)\t\t   f(Xn)\t  f'(Xn)\t  Xn+1\n");
    printf("====================================================================================\n");

    while (i <= itr)
    {
        printf("\t%d ", i);
        printf("\t%f ", Xn);

        fxn = f(Xn);
        printf("\t%f ", fxn);

        dervFxn = derivation(Xn);
        printf("\t%f ", dervFxn);

        finalEque = (Xn)-(fxn/dervFxn);
        printf("\t%f ", finalEque);
        printf("\n");
        
        Xn = finalEque;
        i++;
    }
    printf("====================================================================================\n");
    printf("\n");
}