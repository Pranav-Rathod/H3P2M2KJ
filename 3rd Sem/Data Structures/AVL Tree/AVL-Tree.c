
/* =============================================================================
    implimentation of AVL Tree.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"AVL.h"

int main()
{
    int ch,val;
    NODE *root = NULL;

    while(1)
    {
       printf("\n--------------------------------------\n");
       printf("\n PreOrder: ");
       preordr(root);
       printf("\n InOrder: ");
       inordr(root);
       printf("\n PostOrder: ");
       postordr(root);
       printf("\n");
       printf("\n-----------------MENU-----------------\n");
                printf("1.Insert \n");
                printf("2.Delete \n");
                printf("3.Exit \n");

                printf("\nEnter Your Choice :");
                scanf("%d",&ch);

                switch(ch)
                {
                    case 1:         printf("\nEnter Value: ");
                                    scanf("%d",&val);
                                    root = insertBST(root, val);
                                    break;

                    case 2:         printf("\nEnter Value: ");
                                    scanf("%d",&val);
                                    root = deleteBST(root,val);
                                    break;

                    case 3:         exit(0);
                    default:        printf("\nPlease Enter Valid input\n");
                }
    }
    return 0;
}