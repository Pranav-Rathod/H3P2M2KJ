#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[] = { 2, 3, 10, 4, 40 };
    int n = sizeof(arr)/sizeof(int);
    int val,i;
   
    system("cls");

    printf("\nEnter number to search : ");
    scanf("%d",&val);

    for (i=0 ; i<n ; i++)
    {
        if (arr[i] == val)
        {
            printf("\nElement found at %d index",i);
            printf("\nElement found at %d Position",i+1);
            break;
        }
    }

    if(i == n)
    {
        printf("Element not found..!");
    }
    return 0;
}
