#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int in,i,j,temp;

    printf("Enter number of element : ");
    scanf("%d",&in);

    int a[in];
    int n=sizeof(a)/sizeof(a[0]);

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
        for(j=0 ; j<n-i-1 ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nAfter Sort: \t");
    for(i=0 ; i<n ; i++)
    {   
        printf("%d ", a[i]);    
    }

    return 0;
}