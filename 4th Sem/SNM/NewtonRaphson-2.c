#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return((x*sin(x))+cos(x));
}

float derivation(float x)
{
    return(x*cos(x));
}

void main()
{
    int i=1,itr;
    float Xn,fxn,dervFxn,finalEque;

    
    printf("Enter Number of itration : ");
    scanf("%d",&itr);

    Xn = 3.14;

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
}