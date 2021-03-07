
/* =============================================================================
    Write a menu driven program to implement following operations on the
    singly linked list.
        (a) Insert a node at the front of the linked list.
        (b) Insert a node at the end of the linked list.
        (c) Insert a node such that linked list is in ascending order.
        (d) Delete a first node of the linked list.
        (e) Delete a node before specified position.
        (f) Delete a node after specified position.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"SLL.h"

int main()
{
    int ch,val,pos,eval,nval;
    NODE *start = NULL;

    while(1)
    {
       printf("\n--------------------------------------\n");
       display(start);
       printf("\n-----------------MENU-----------------\n");
                printf("1.Insert at First \n");
                printf("2.Insert at Last \n");
                printf("3.Insert at Before  \n");
                printf("4.Insert at After  \n");
                printf("5.Insert at position \n");
                printf("6.Insert at Shorted \n");
                printf("7.Delete First \n");
                printf("8.Delete Last \n");
                printf("9.Delete from position\n");
                printf("10.Delete Before \n");
                printf("11.Delete After \n");
                printf("12.Delete Sorted \n");
                printf("13.Delete All Occurrence \n");
                printf("14.Delete First Occurrence \n");
                printf("15.Delete at value \n");
                printf("16.Exit");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:         printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insertfirst(start, val);
                                        break;

                        case 2:         printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insertlast(start, val);
                                        break;

                        case 3:         printf("\nEnter Existing Value: ");
                                        scanf("%d",&eval);
                                        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insertbefore(start,eval,val);
                                        break;

                        case 4:         printf("\nEnter Existing Value: ");
                                        scanf("%d",&eval);
                                        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        insertafter(start,eval,val);
                                        break;

                        case 5:         printf("\nEnter Position: ");
                                        scanf("%d",&pos);
                                        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insertatpos(start,pos,val);
                                        break;

                        case 6:         printf("\nEnter New Value: ");
                                        scanf("%d",&nval);
                                        insertsorted(start,nval);
                                        break;

                        case 7:
                                        start = dltfirst(start);
                                        break;

                        case 8:
                                        start = dltlast(start);
                                        break;

                        case 9:         printf("\nEnter Position: ");
                                        scanf("%d",&pos);
                                        start = dltatpos(start,pos);
                                        break;

                        case 10:        printf("\nEnter Existing Value: ");
                                        scanf("%d",&eval);
                                        start = dltbefore(start,eval);
                                        break;

                        case 11:        printf("\nEnter Existing Value: ");
                                        scanf("%d",&eval);
                                        //start = dltafter(start,eval);
                                        dltafter(start,eval);
                                        break;

                        case 12:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltsorted(start,val);
                                        break;

                        case 13:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltalloccu(start,val);
                                        break;

                        case 14:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltfirstoccu(start,val);
                                        break;

                        case 15:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltatval(start,val);
                                        break;

                        case 16:        exit(0);
                                        break;

                        default:        printf("\nWrong Choice. \n");
                                        break;
                }
        }
    return 0;
}