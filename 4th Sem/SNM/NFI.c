#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n, i, j, k;

    system("cls");
    printf("\nENTER THE VALUE OF n : ");
    scanf("%d", &n);
    float x[20], y[20][20];

    for (i = 0; i < n; i++)
    {
        printf("\nENTER THE VALUE OF x[%d] AND y[%d] : ", i, i);
        scanf("%f %f", &x[i], &y[i][0]);
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {

            y[j][i] = y[j + 1][i + 1] - y[j][i - 1];
        }
    }
    for (i = 0; i < n; i++)
    {

        printf("\n %f\t%f", x[i], y[i][0]);
        for (j = 1; j <= n - (i + 1); j++)
        {
            printf("\t%f", y[i][j]);
        }
    }

    float p, h, sum, X;
    printf("\n\nEnter the value for which you need solution(x) : ");
    scanf("%f", &X);
    h = x[1] - x[0];
    p = (X - x[0])/h; 
    
    float nr = 1, dr = 1;
    sum = y[0][0];

    for(int i = 1; i < n; i++)
    {
        nr = nr * (p-(i-1));
        dr = dr * i;
        sum = sum + ((nr/dr)*y[0][i]);
    }
    printf("\nFinal Ans: %f", sum);
    return 0;
}