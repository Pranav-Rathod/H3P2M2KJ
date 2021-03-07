
/* =============================================================================
    Introduction to Dynamic Memory Allocation. DMA functions
    malloc(), calloc(), free() etc.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int roll;
    float total_marks;
}STUDENT;

int main()
{
    int n;
    STUDENT *ptr;

    printf("\nHow Many Students are there: ");
    scanf("%d",&n);

    ptr = (STUDENT *)malloc(n* sizeof(STUDENT));

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter student %d data\n",i+1);
        printf("Roll no: ");
        scanf("%d",&(ptr+i)->roll);
        printf("Total marks: ");
        scanf("%f",&(ptr+i)->total_marks);
    }

    printf("\nDisplaying information \nRoll no.\tTotal marks\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%0.2f\n",(ptr+i)->roll,(ptr+i)->total_marks);
    }
    free(ptr);
    return 0;
}