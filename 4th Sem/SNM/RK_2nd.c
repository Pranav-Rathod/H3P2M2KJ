#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// float f(float x, float y)
// {
//     return (y-(2*x)/y);
// }

float f(float x, float y)
{
    return ((3*x)+y);
}

int main()
{
    float x,y,x0,y0,h,xn,k,k1,k2;

    system("cls");

    printf("Enter Value of x0 : ");
    scanf("%f",&x0);
    printf("Enter Value of y0 : ");
    scanf("%f",&y0);
    printf("Enter Stepsize h : ");
    scanf("%f",&h);
    printf("Enter Value of Xn : ");
    scanf("%f",&xn);

    x = x0;
    y = y0;

    printf("\n\tX\t\tY\n");

    while(x < xn)
    {
        k1 = h*f(x,y);
        k2 = h*f(x+h,y+k1);
        k = (k1+k2)/2;
        y += k;
        x += h;
        printf("\n\t%f\t\t%f",x,y);
    }
}