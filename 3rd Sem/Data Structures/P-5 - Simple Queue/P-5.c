
/* =============================================================================
    Write a program to implement QUEUE using arrays that performs following
    operations.
    (a) INSERT (b) DELETE (c) DISPLAY
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"

int main()
{
    int ch,pos,val;
    Queue q;
    qinit(&q);

    while(1)
    {
        printf("select operation\n");
        printf("1 insert\n");
        printf("2 delete\n");
        printf("3 peek\n");
        printf("4 change\n");
        printf("5 display\n");
        printf("6 isempty\n");
        printf("7 isfull\n");
        printf("8 exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Enter value: ");
                scanf("%d",&val);
                qinsert(&q,val);
                break;

            case 2: val = qdelete(&q);
                if(val != NULL)
                    printf("Deleted value is: %d\n",val);
                else
                    printf("Deleted value is: %d\n",val);
                break;

            case 3: val = qpeek(&q);
                if(val != NULL)
                    printf("Top of the Queue is: %d\n",val);
                break;

            case 4: printf("Enter the position: ");
                scanf("%d",&pos);
                printf("Enter the val: ");
                scanf("%d",&val);
                qchange(&q,pos,val);
                break;

            case 5: qdisplay(&q);
                break;

            case 6: if(isEmpty(&q))
                    printf("Yes.Queue is empty\n");
                else
                    printf("NO.Queue is not empty\n");
                break;

            case 7: if(isFull(&q))
                    printf("Yes.Queue is full\n");
                else
                    printf("NO.Queue is not full\n");
                break;

            case 8: exit(0);
                break;
                
            default: printf("Invalid value");
        }
    }
    return 0;
}