
/* =============================================================================
    Write a program to implement Selection Sort.
============================================================================== */

#include<stdio.h>

int main()
{
    int a[] = {6,2,1,9,8,4};
    int i,j,n=6,temp,min;

    printf("Before Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }
    printf("\n");



    for(i=0 ; i<n-1 ; i++)
    {
        min = i;
        for(j=i+1 ; j<n ; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;

        printf("\n");
        for(j=0 ; j<n ; j++)
        {
            printf("%d ", a[j]);
        }
    }

    // Selection Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }

    return 0;
}