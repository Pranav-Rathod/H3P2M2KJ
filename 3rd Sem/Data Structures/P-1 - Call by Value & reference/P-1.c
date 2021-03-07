
/* =============================================================================
   Introduction to pointers. Call by Value and Call by reference.
============================================================================== */

#include<stdio.h>

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a,b;

    printf("\nEnter 1st Value: ");
    scanf("%d",&a);
    printf("\nEnter 2nd Value: ");
    scanf("%d",&b);

    printf("\nBefore Swapping: \n");
    printf("1st Value is: %d\n",a);
    printf("2nd Value is: %d\n",b);

    swap(&a,&b);
    printf("\nAfter Swapping: \n");
    printf("1st Value is: %d\n",a);
    printf("2nd Value is: %d\n",b);

    return 0;
}