
/* =============================================================================
    Write a program to implement Quick Sort.
============================================================================== */

#include<stdio.h>

void swap(int* a, int* b)
{ 
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int a[], int left, int right)
{
    int pivotpoint = (left + right) / 2;
    int pivot = a[pivotpoint];
    swap(&a[pivotpoint], &a[right]);
    pivotpoint = right;
    int i = left;
    int j = right-1;

    while (i < j)
    {
        while (i < right-1 && a[i] < pivot)
        {
            i++;
        }
        while (j > 0 && a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i++], &a[j--]);
        }
    }
    if (i == j && a[i] < a[pivotpoint])
    {
        i++;
    }
    swap(&a[i], &a[pivotpoint]);
    return i;
}

void quick(int a[], int left, int right)
{
    if (left < right)
    {
        int p;
        p = partition(a, left, right);
        quick(a, left, p-1);
        quick(a, p+1, right);
    }
}


int main()
{
    int i,j,n = 12;
    int a[] = {20,6,2,1,9,8,4,3,12,17,5,7};

    printf("Before Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }
    printf("\n");

    quick(a, 0, 11);

    // Quick Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(j=0 ; j<n ; j++)
    {   printf("%d ", a[j]);    }

    return 0;
}