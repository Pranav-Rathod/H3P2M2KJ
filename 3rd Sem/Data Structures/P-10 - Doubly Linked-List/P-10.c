
/* =============================================================================
    Write a program to implement following operations on the doubly linked list.
        (a) Insert a node at the front of the linked list.
        (b) Insert a node at the end of the linked list.
        (c) Delete a last node of the linked list.
        (d) Delete a node before specified position.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"DLL.h"

int main()
{
    int ch,val,pos,eval;
    NODE *start = NULL;

    while(1)
    {
       printf("\n--------------------------------------\n");
       display(start);
       printf("\n");
       displayrev(start);
       printf("\n-----------------MENU-----------------\n");
                printf("1.Insert First \n");
                printf("2.Insert Last \n");
                printf("3.Insert at Position \n");
                printf("4.Insert Before \n");
                printf("5.Insert After \n");
                printf("6.Insert Sorted \n");
                printf("7.Delete First \n");
                printf("8.Delete Last \n");
                printf("9.Delete at position\n");
                printf("10.Delete Before \n");
                printf("11.Delete After \n");
                printf("12.Delete at Value\n");
                printf("13.Delete First Occurrence \n");
                printf("14.Delete All Occurrence \n");
                printf("15.Delete Sorted \n");
                printf("16.Exit");
                printf("\n--------------------------------------\n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:         printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insrtfirst(start, val);
                                        break;

                        case 2:         printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insrtlast(start, val);
                                        break;

                        case 3:         printf("\nEnter Position: ");
                                        scanf("%d",&pos);
                                        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insertatpos(start,pos,val);
                                        break;

                        case 4:         printf("\nEnter Existing Value: ");
                                        scanf("%d",&eval);
                                        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = insertbefore(start,eval,val);
                                        break;

                        case 5:         printf("\nEnter Existing Value: ");
                                        scanf("%d",&eval);
                                        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        insertafter(start,eval,val);
                                        break;

                        case 6:         printf("\nEnter New Value: ");
                                        scanf("%d",&val);
                                        insertsorted(start,val);
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
                                        start = dltafter(start,eval);
                                        break;

                        case 12:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltatval(start,val);
                                        break;

                        case 13:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltfirstoccu(start,val);
                                        break;

                        case 14:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltalloccu(start,val);
                                        break;

                        case 15:        printf("\nEnter Value: ");
                                        scanf("%d",&val);
                                        start = dltsorted(start,val);
                                        break;

                        case 16:        exit(0);
                                        break;

                        default:        printf("\nWrong Choice. \n");
                                        break;
                }
        }
    return 0;
}