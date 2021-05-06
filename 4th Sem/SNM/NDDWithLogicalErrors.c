#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i, j;
    system("cls");
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    float x[n], y[n][n], a, nr = 1;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value of x[%d] and Y[%d]: ", i, i);
        scanf("%f%f", &x[i], &y[i][0]);
    }

    printf("\nEnter the value of x:");
    scanf("%f", &a);

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {

            y[j][i] = (y[j + 1][i - 1] - y[j][i - 1]) / (x[j + i] - x[j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n %.3f\t%.3f", x[i], y[i][0]);
        for (j = 1; j < n - (i); j++)
        {
            printf("\t%.3f", y[i][j]);
        }
    }
    float sum = y[0][0], temp;
    for (int i = 1; i < n; i++)
    {
        nr = nr * (a - x[i - 1]);
        temp = nr * y[0][i];
        sum = sum + temp;
    }
    printf("\n When x = %f, corresponding y = %f\n", a, sum);
    return 0;
}