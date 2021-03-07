#include<stdio.h>

int linearSearch(int arr[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == val)
            return i;
    return -1;
}

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
    /*  int val = 10;
        int arr[] = { 2, 3, 10, 4, 40 };
        int result = linearSearch(arr, n, val);   */
   
    int val = 120;
    int arr[] = {10, 23, 45, 120, 80};
    int result = binarySearch(arr, 0, n - 1, val);

    if (result == -1)
    {
        printf("\nValue not found\n");
    }
    else
    {
        printf("\nValue found at %d Place..!\n",result+1);
    }
    return 0;
}