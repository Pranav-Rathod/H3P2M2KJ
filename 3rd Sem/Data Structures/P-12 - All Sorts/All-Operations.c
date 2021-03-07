
/* =============================================================================
    Write a program to implement
    (a) Bubble Sort
    (b) Insertion Sort
    (c) Selection Sort
    (d) Merge Sort
    (e) Quick Sort
============================================================================== */

#include<stdio.h>

// ============================================================== //
//                          Bubble Sort                           //
// ============================================================== //
int main()
{
    int a[] = {6,2,1,9,8,4};
    int i,j,n=6,temp;

    printf("Before Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }
    printf("\n");

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j<n-i-1 ; j++)
        {
            if(a[j] > a[j+1])
            {
                /*  a[j] = a[j] + a[j+1];
                    a[j+1] = a[j] - a[j+1];
                    a[j] = a[j] - a[j+1];   */

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        printf("\n");
        for(j=0 ; j<n ; j++)
        {
            printf("%d ", a[j]);
        }
    }

    // Bubble Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }

    return 0;
}
// -------------------------------------------------------------- //


// ============================================================== //
//                          Insertion Sort                        //
// ============================================================== //
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
// -------------------------------------------------------------- //


// ============================================================== //
//                         Selection Sort                         //
// ============================================================== //
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
// -------------------------------------------------------------- //


// ============================================================== //
//                          Merge Sort                            //
// ============================================================== //

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
    {   printf("%d ", a[i]);    }
    printf("\n");

    MergeSort(a, n);

    // Merge Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {   printf("%d ", a[i]);    }

    return 0;
}
// -------------------------------------------------------------- //


// ============================================================== //
//                           Quick Sort                           //
// ============================================================== //

#include<stdio.h>
#include<stdlib.h>

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

    // Merge Sort
    printf("\n");
    printf("\nAfter Sort: \t");
    for(j=0 ; j<n ; j++)
    {   printf("%d ", a[j]);    }

    return 0;
}
// -------------------------------------------------------------- //