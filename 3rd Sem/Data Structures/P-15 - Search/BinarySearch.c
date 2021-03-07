#include<stdio.h>

int binarySearch(int arr[], int l, int u, int val)
{
    while (l <= u)
    {
        int m = (l + u) / 2;

        if (arr[m] == val)
            return m;

        if (arr[m] < val)
            l = m + 1;
        else
            u = m - 1;
    }
    return -1;
}

int main()
{ 
    int n = 5; 
    int arr[] = {10, 23, 45, 120, 80};
    int val = 120; 
    int result = binarySearch(arr, 0, n - 1, val); 

    if (result == -1)
    {
        printf("\nValue not found\n");
    }
    else
    {
        printf("\nValue found at Place no.%d\n",result+1);
    }
    return 0; 
}