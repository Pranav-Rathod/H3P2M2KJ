
/* =============================================================================
    Implement a program using array for stack that performs operations.
    (a)PUSH (b) POP (c) PEEP (d) CHANGE (e) DISPLAY
============================================================================== */

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main()
{
    int ch, val, pos;
    STACK s;

    init(&s);

    while (1)
    {
        printf("\nSelect Operation YOu Want To Perform : \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Change\n");
        printf("5. Display\n");
        printf("6. isEmpty\n");
        printf("7. isFull\n");
        printf("8. Exit\n");

        printf("Enter Your Choice :  ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:     printf("Please Enter Value : ");
                scanf("%d", &val);
                push(&s, val);
                break;

            case 2:     val = pop(&s);
                if (val != NULL)
                    printf("Popped Value is: %d\n",val);
                break;

            case 3:     val = peep(&s);
                if (val != NULL)
                    printf("Top Of The Stack is: %d\n",val);
                break;

            case 4:     printf("Please Enter Position: ");
                scanf("%d",&pos);
                printf("Please Enter Value: ");
                scanf("%d",&val);
                change(&s,pos,val);
                break;

            case 5:     display(&s);
                break;

            case 6:     if (isEmpty(&s))
                    printf("Yes, Stack is Empty\n");
                else
                    printf("No, Stack is Not Empty\n");
                break;

            case 7:     if (isFull(&s))
                    printf("Yes, Stack is Full\n");
                else
                    printf("No, Stack is Not Full\n");
                break;

            case 8:     exit(0);
                break;

            default:
                printf("Please input From 1 To 8 Number Only\n");
        }
    }
    return 0;
}