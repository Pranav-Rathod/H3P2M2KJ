
/* =============================================================================
    Write a program to implement Insertion Sort.
============================================================================== */

#include<stdio.h>

int main()
{
    int a[] = {6,2,1,9,8,4};
    int i,j,n=6,temp,curr;

    printf("Before Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }
    printf("\n");



    for(i=0 ; i<n ; i++)
    {
        curr = a[i];
        j = i-1;
        while(j >= 0 && a[j] > curr)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;

        printf("\n");
        for(j=0 ; j<n ; j++)
        {
            printf("%d ", a[j]);
        }
    }

    // Insertion Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }

    return 0;
}
