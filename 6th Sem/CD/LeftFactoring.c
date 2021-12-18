#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[20], a1[5], a2[5], a3[5], a4[5];
    int i, j=0, k=0, l=0;
    
    system("cls");

    printf("Enter Grammer A->");
    scanf("%s",&a);

    for (i=0,j=0; a[i] != '/'; i++,j++)
    {
        a1[j] = a[i];
    }
    a1[j] = '\0';
    for (i=++j; a[i] != '\0'; i++,k++)
    {
        a2[k] = a[i];
    }
    a2[k++] = '\0';

    for (j=0,k=0; j<strlen(a1) || j<strlen(a2) ; k++,j++)
    {
        if(a1[j] == a2[k])
        {
            a3[k] = a1[j];
        }
        else
        {
            a4[l] = a1[j];
            a4[++l] = a2[j];
            l++;
        }
    }
    
    printf("\nA-> %sX\n", a3);
    printf("X-> %c|%c", a4[0], a4[1]);
}