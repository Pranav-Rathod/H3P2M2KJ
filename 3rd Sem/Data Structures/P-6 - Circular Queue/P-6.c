
/* =============================================================================
    Write a program to implement Circular Queue using arrays that performs
    following operations.
    (a) INSERT (b) DELETE (c) DISPLAY
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"CircularQueue.h"

int main()
{
    int ch, pos, val;
    cqueue q;
    cinit(&q);

     while(1)
     {
     printf("\n\nEnter Your Opreation. Which You Want To Perform On Circular Queue\n");
     printf("1. Insert\n");
     printf("2. Delete\n");
     printf("3. Change\n");
     printf("4. Peek\n");
     printf("5. Display\n");
     printf("6. IsEmpty\n");
     printf("7. IsFull\n");
     printf("8. Exit\n");
     printf("Enter Your Choice: ");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1: printf("\nEnter Value: ");
                 scanf("%d",&val);
                 cinsrt(&q,val);
                 break;

         case 2: val = cdlt(&q);
                 if(val != NULL)
                    printf("\nDeleted Value is: %d\n",val);
                 break;

         case 3: printf("Enter Position :");
                 scanf("%d",&pos);
                 printf("enter Value: ");
                 scanf("%d",&val);
                 cchng(&q,pos,val);
                 break;

         case 4: val = cpeek(&q);
                 if(val != NULL)
                    printf("\nFront Most Value is: %d\n",val);
                 break;

         case 5: cdisply(&q); break;

         case 6: if(isEmpty(&q))
                    printf("\nYes, Queue is Empty..!\n");
                 else
                    printf("\nNo, Queue is Not Empty..!\n");
                    break;

         case 7: if(isFull(&q))
                    printf("\nYes, Queue is Full..!\n");
                 else
                    printf("\nNo, Queue is Not Full..!\n");
                    break;
     }
     }
     return 0;
}