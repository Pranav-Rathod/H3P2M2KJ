
/* =============================================================================
    Write a program to implement queue using linked list.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"QueueSLL.h"

int main() {
    int ch, val, pos;
    NODE *start = NULL;

    while(1){
        printf("\nselect operation\n");
        printf("1 insert\n");
        printf("2 delete\n");
        printf("3 peek\n");
        printf("4 change\n");
        printf("5 display\n");
        printf("6 isempty\n");
        printf("7 exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("Enter value: ");
                    scanf("%d",&val);
                    start = qinsert(start,val);
                    break;

            case 2: start = qdelete(start);
                    break;

            case 3: qpeek(start);
                    break;

            case 4: printf("Enter the position: ");
                    scanf("%d",&pos);
                    printf("Enter the val: ");
                    scanf("%d",&val);
                    qchange(start,pos,val);
                    break;

            case 5: qdisplay(start);
                    break;

            case 6: if(isEmpty(start))
                    printf("Yes.Queue is empty\n");
                    else
                    printf("NO.Queue is not empty\n");
                    break;

            case 7: exit(0);
                    break;

            default: printf("Invalid Choice");
        }
    }
    return 0;
}