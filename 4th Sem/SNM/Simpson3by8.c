#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{
    return (1/(1+x));
}

int main()
{
    int n;
    float a,b,x[20],y[20],sum,sum3,ans,h;

    system("cls");

    printf("Enter Upper Limit : ");
    scanf("%f",&b);
    printf("Enter Lower Limit : ");
    scanf("%f",&a);
    printf("Enter Number of itration : ");
    scanf("%d",&n);

    h = (b-a)/n;

    for (int i=0 ; i<=n ; i++)
    {
        x[i] = a + i*h;
        y[i] = f(x[i]);
        printf("\n%f\t%f",x[i],y[i]);
    }

    sum=0;
    sum3=0;
    
    for (int i=1 ; i<n ; i++)
    {
        if(i%3 == 0)
        {
            sum3 += y[i];
        }
        else
        {
            sum += y[i];
        }
    }
    
    ans = (3*h/8)*(y[0]+y[n] + (3*sum) + (2*sum3));
    printf("\n\nAns : %f",ans);
    return 0;
}