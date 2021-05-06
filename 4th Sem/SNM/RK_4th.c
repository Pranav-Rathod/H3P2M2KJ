#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float f(float x, float y)
{
    return (x+y);
}

void main()
{
    float x0, y0, x, y, h, xn, k, k1, k2, k3 ,k4;

    system("cls");
    
    printf("\nEnter Value of x0 : ");
    scanf("%f",&x0);
    printf("Enter Value of y0 : ");
    scanf("%f",&y0);
    printf("Enter Stepsize h : ");
    scanf("%f",&h);
    printf("Enter Value of Xn : ");
    scanf("%f",&xn);

    x = x0;
    y = y0;

    while(x < xn)
    {
        k1 = h*f(x,y);
        k2 = h*f(x+(h/2),y+(k1/2));
        k3 = h*f(x+(h/2),y+(k2/2));
        k4 = h*f(x+h,y+k3);

        k = (k1+2*k2+2*k3+k4)/6;
        y = y + k;
        x = x + h;
        printf("\n\t %f \t\t %f",x,y);
    }
}
