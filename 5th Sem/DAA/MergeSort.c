#include<stdio.h>
#include<stdlib.h>

void combine(int a[], int tmp[], int low, int mid, int high)
{
    int i = 0;
    int j = 0;
    int k = 1;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            tmp[k] = a[i];
            i++;
            k++;
        }
        else
        {
            tmp[k] = a[j];
            i++;
            k++;
        }
    }

    while (i <= mid)
    {
        tmp[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        tmp[k] = a[j];
        j++;
        k++;
    }

    for (int i = low ; i <= high ; i++)
    {
        a[i] = tmp[i];
    }
}


void MergeSort(int a[], int tmp[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(a, tmp, low, mid);
        MergeSort(a, tmp, mid+1, high);
        combine(a, tmp, low, mid, high);
    }
}


int main()
{
    int i,j,n = 11;
    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int temp[sizeof(a)/sizeof(int)];

    printf("Before Sort: \t",sizeof(a)/sizeof(int));
    for(i=0 ; i<n ; i++)
    {    printf("%d ", a[i]);    }
    printf("\n");

    MergeSort(a, temp, 0, sizeof(a)/sizeof(int));

    printf("\n");
    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {    printf("%d ", a[i]);    }

    return 0;
}