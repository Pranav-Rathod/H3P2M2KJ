#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float nr,dr,sum=0;
    int i,j,n,val;

    printf("Enter value of n : ");
    scanf("%d",&n);

    float x[n],y[n];

    for (i = 0; i < n; i++)
    {
        printf("Value of x[%d] and y[%d] : ",i,i);
        scanf("%f%f", &x[i],&y[i]);
    }
    
    printf("Enter value of x : ");
    scanf("%d",&val);

    for (i = 0; i < n; i++)
    {
        nr=1;
        dr=1;
        for (j = 0; j < n; j++)
        {
            if(j != i)
            {
                nr = nr * (val-x[j]);
                dr = dr * (x[i]-x[j]);
            }
        }
        sum = sum + (nr/dr)*y[i];
    }
    printf("Ans is : %f",sum);
    return 0;
}