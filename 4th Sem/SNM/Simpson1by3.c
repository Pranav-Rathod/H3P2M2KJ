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
    float a,b,x[20],y[20],sum1,sum2,ans,h;

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

    sum1=0;
    sum2=0;
    
    for (int i=1; i<n; i++)
    {
        if(i%2 == 0)
        {
            sum2 += y[i];
        }
        else
        {
            sum1 += y[i];
        }
    }
    
    
    ans = (h/3)*(y[0]+y[n] + 4*sum1 + 2*sum2);
    printf("\n\nAns : %f",ans);
    return 0;
}