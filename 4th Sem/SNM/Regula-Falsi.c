#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return(pow(x,3)-x-11);
    //return x*x*x-x-11;
}

void main()
{
    int i=1,itr;
    float a,b,c,fa,fb,fc;
    
    printf("Enter value of A : ");
    scanf("%f",&a);
    printf("Enter value of B : ");
    scanf("%f",&b);
    printf("Enter value of itr : ");
    scanf("%d",&itr);


    if(f(a) < 0 && f(b) > 0)
    {
        printf("\n\n");
        printf("A = %.5f \t B = %.5f", a, b);
        printf("\n\n");

        printf("   Itrations\t\t   A\t\t   B\t\t   C\t\t   f(c)\n");
        printf("====================================================================================\n");

        while(i <= itr)
        {
            printf("\t%d \t\t %.5f\t %.5f", i , a ,b);
            fa = f(a);
            fb = f(b);
            c = ((a*fb)-(b*fa))/(fb-fa);
            fc = f(c);

            //if(fa*fc < 0)
            if(fc > 0)
            {
                b=c;
            }
            else
            {
                a=c;
            }

            printf("\t %.5f  \t %.5f\n", c, fc);
            i++;
        }
        printf("====================================================================================\n");
        printf("\n\n");
    }
    else
    {
        printf("Invalid Numbers..!");
    }
}