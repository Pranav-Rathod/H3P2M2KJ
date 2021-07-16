#include<stdio.h>
#include<stdlib.h>

int itretive(int n)
{
    int fect=1;
    while(n>0)
    {
        fect *= n;
        n--;
    }
    return fect;
}

int recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return recursive(n-1)*n;
    }
}


int main()
{
    int num;

    system("cls");

    printf("\nEnter Number : ");
    scanf("%d", &num);


    printf("\nUsing recursive : ");
    num<0 ? printf("Factorial not found") : printf("%d", recursive(num));

    printf("\nUsing itretive  : ");
    num<0 ? printf("Factorial not found") : printf("%d", itretive(num));
    
    return 0;
}