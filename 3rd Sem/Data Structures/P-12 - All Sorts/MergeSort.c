
/* =============================================================================
    Write a program to implement Merge Sort.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>

void Merge(int a[], int tmp[], int startA, int startB, int endB)
{
    int aptr = startA;
    int bptr = startB;
    int idx = startA;

    while (aptr < startB && bptr < endB+1)
    {
        if (a[aptr] < a[bptr])
        {
            tmp[idx++] = a[aptr++];
        }
        else
        {
            tmp[idx++] = a[bptr++];
        }
    }

    while (aptr < startB)
    {
        tmp[idx++] = a[aptr++];
    }
    while (bptr < endB+1)
    {
        tmp[idx++] = a[bptr++];
    }

    for (int i = startA ; i <= endB; i++)
    {
        a[i] = tmp[i];
    }
}

void MSort(int a[], int tmp[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        MSort(a, tmp, start, mid);
        MSort(a, tmp, mid + 1, end);
        Merge(a, tmp, start, mid+1, end);
    }
}

void MergeSort(int a[], int size)
{
    int* tmp = malloc(sizeof(int[size]));
    MSort(a, tmp, 0, size-1);
    free(tmp);
}

int main()
{
    int i,j,n = 11;
    int a[] = {6,2,1,9,8,4,3,12,17,5,7};

    printf("Before Sort: \t");
    for(i=0 ; i<n ; i++)
    {    printf("%d ", a[i]);    }
    printf("\n");

    //MergeSort(a, n);
    MergeSort(a, sizeof(a)/sizeof(int));

    // Merge Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {    printf("%d ", a[i]);    }

    return 0;
}