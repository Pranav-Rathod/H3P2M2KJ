#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,temp,min,in;

    system("cls");

    printf("\nEnter number of element : ");
    scanf("%d",&in);

    int a[in];
    int n = sizeof(a)/sizeof(a[0]);

    for(i=0 ; i<in ; i++)
    {   
        printf("Enter element no %d : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nBefore Sort: \t");
    for(i=0 ; i<n ; i++)
    {   
        printf("%d ", a[i]);
    }
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
        if(min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {   
        printf("%d ", a[i]);
    }

    return 0;
}