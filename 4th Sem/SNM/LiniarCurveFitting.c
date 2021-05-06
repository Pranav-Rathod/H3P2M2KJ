#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calc_a(float x, float y, float x2, float xy, int n)
{ 
    return ((x*xy)-(y*x2))/((pow(x, 2))-(n*x2));
}

float calc_b(float a, float x, float y, int n)
{ 
    return (y-(n*a))/x;
}

int main()
{
    int n;

    system("cls");
    printf("\nEnter the value of N : ");
    scanf("%d", &n);
    
    float x[n], y[n], sum_x=0, sum_y=0, sum_x2=0, sum_xy=0; 
    float a, b;

    for(int i=0; i<n ; i++)
    {
       printf("Enter x[%d] and y[%d] : ",i,i);
       scanf("%f %f", &x[i], &y[i]);
       sum_x += x[i];
       sum_y += y[i];
       sum_xy += (x[i]*y[i]);
       sum_x2 += (x[i]*x[i]);
    }

    for(int i=0; i<n; i++)
       printf("\n%f\t%f\t%f\t%f", x[i], y[i], (x[i]*y[i]), (x[i]*x[i]));
    
    printf("\n\n%f\t%f\t%f\t%f", sum_x, sum_y, sum_xy, sum_x2);

    a = calc_a(sum_x, sum_y, sum_x2, sum_xy, n);
    b = calc_b(a, sum_x, sum_y, n);

    printf("\n");
    printf("\nA : %f", a); 
    printf("\nB : %f", b);

    return 0;
}