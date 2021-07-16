#include<stdio.h>
#include<stdlib.h>

// int binarySearch(int arr[], int l, int u, int val)
// {
//     while (l <= u)
//     {
//         int m = (l + u) / 2;

//         if (arr[m] == val)
//             return m;

//         if (arr[m] < val)
//             l = m + 1;
//         else
//             u = m - 1;
//     }
//     return -1;
// }

int binarySearch(int arr[], int l, int u, int val)
{
    if (l <= u)
    {
        int m = (l + u) / 2;

        if (arr[m] == val)
            return m;

        if (arr[m] > val)
            return binarySearch(arr,l,m-1,val);
        else
            return binarySearch(arr,m+1,u,val);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 23, 45, 120, 140, 160, 180, 200};
    int n = sizeof(arr)/sizeof(int);
    int val;

    system("cls");

    printf("\nEnter Value : ");
    scanf("%d",&val);

    int result = binarySearch(arr, 0, n-1, val);

    if (result == -1)
    {
        printf("\nValue not found\n");
    }
    else
    {
        printf("\nValue found at index no. %d",result);
        printf("\nValue found at Place no. %d\n",result+1);
    }
    return 0; 
}