#include<stdio.h>

int search(int arr[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == val)
            return i;
    return -1;
}


int main()
{
    int n = 5;
    int arr[] = { 2, 3, 10, 4, 40 };
    int val = 10;
   
    int result = search(arr, n, val);

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