
/* =============================================================================
    Write a program to implement stack using linked list.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"StackSLL.h"

int main() {
    int ch, val, pos;
    NODE *start = NULL;

    while (1)
    {
        printf("\nSelect Operation You Want To Perform : \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Change\n");
        printf("5. Display\n");
        printf("6. isEmpty\n");
        printf("7. Exit\n");

        printf("Enter Your Choice :  ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:     printf("Please Enter Value : ");
                        scanf("%d", &val);
                        start = push(start, val);
                        break;

            case 2:     start = pop(start);
                        break;

            case 3:     peep(start);
                        break;

            case 4:     printf("Please Enter Position: ");
                        scanf("%d",&pos);
                        printf("Please Enter Value: ");
                        scanf("%d",&val);
                        change(start,pos,val);
                        break;

            case 5:     display(start);
                        break;

            case 6:     if (isEmpty(start))
                        printf("Yes, Stack is Empty\n");
                        else
                        printf("No, Stack is Not Empty\n");
                        break;

            case 7:     exit(0);
                        break;

            default:
                printf("Please input From 1 To 8 Number Only\n");
        }
    }
    return 0;
}