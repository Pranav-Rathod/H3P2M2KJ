#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}NODE;

NODE* createnode()
{
    NODE *n = (NODE *)malloc(sizeof(NODE));
    n->data = NULL;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void display(NODE *start)
{
    NODE *tr = start;

    if(start == NULL)
        printf("\nForward Doubly Linked List is Empty..!\n");
    else
    {
        printf("\nForward Doubly Linked List Contains: ");
        while(tr != NULL)
        {
            printf("%d",tr->data);
                if(tr->next != NULL)
                {
                    printf(" <=> ");
                }
            tr = tr->next;
        }
    }
}

void displayrev(NODE *start)
{
    NODE *tr = start;

    if(start == NULL)
        printf("\nReverse Doubly Linked List is Empty..!\n");
    else
    {
        while(tr->next != NULL)
        {
            tr = tr->next;
        }

        printf("\nReverse Doubly Linked List Contains: ");

        while(tr != NULL)
        {
            printf("%d",tr->data);
                if(tr->prev != NULL)
                {
                    printf(" <=> ");
                }
            tr = tr->prev;
        }
    }
}

//-------------- INSERTION OPREATION --------------//

NODE* insrtfirst(NODE *start, int val)
{
    NODE *n = createnode();
    n->data = val;

    if(start == NULL)
    {
        start = n;
    }
    else
    {
        n->next = start;
        start->prev = n;
        start = n;
    }

    return start;
}

NODE* insrtlast(NODE *start, int val)
{
    NODE *tr = start;
    NODE *n = createnode();
    n->data = val;

    if(start == NULL)
    {
        start = n;
    }
    else
    {
        while(tr->next != NULL)
        {
            tr = tr->next;
        }
        n->next = NULL;
        n->prev = tr;
        tr->next = n;
    }
    return start;
}

NODE* insertatpos(NODE *start, int pos, int val)
{
    int i = 1;
    NODE *pre = NULL;
    NODE *tr = start;
    NODE *n = createnode();
    n->data = val;

    if(pos == 1)           // Insert First
    {
        n->next = start;
        start->prev = n;
        n->prev = NULL;
        start = n;
    }
    else
    {
            while(i != pos)
            {
                pre = tr;
                tr = tr->next;
                i++;
            }
            if(tr != NULL)
            {
                n->next = tr;
                n->prev = pre;
                tr->prev = n;
                pre->next = n;
            /*  n->next = tr->next;
                n->prev = tr;
                tr->next->prev = n;
                tr->next = n;       */
            }
            else
            {
                printf("\nInvalid Position..!\n");
            }
    }
    return start;
}

NODE* insertbefore(NODE *start, int eval, int val)
{
    NODE *tr;
    NODE *n = createnode();
    n->data = val;

    if(start->data == eval)      // Insert First
    {
        n->next = start;
        start->prev = n;
        n->prev = NULL;
        start = n;
    }
    else
    {
        tr = start;
        while(tr->data != eval)
        {
            tr = tr->next;
        }
        if(tr != NULL)
        {
            n->next = tr;
            n->prev = tr->prev;
            tr->prev->next = n;
            tr->prev = n;
        }
        else
        {
            printf("\nValue Not Found..!\n");
        }
    }
    return start;
}

void insertafter(NODE *start, int eval, int val)
{
    NODE *tr = start;
    NODE *n = createnode();
    n->data = val;

        while(tr->data != eval)
        {
            tr = tr->next;
        }
        if(tr != NULL)
        {
            n->next = tr->next;
            n->prev = tr;
            tr->next = n;
        }
        else if(tr->next == NULL)
        {
            n->next = NULL;
            n->prev = tr;
            tr->next = n;
        }
        else
        {
            printf("\nValue Not Found..!\n");
        }
}

void insertsorted(NODE *start, int val)
{
    NODE *tr = start, *pre = NULL;
    NODE *n = createnode();
    n->data = val;

        while(tr->data < val)
        {
            pre = tr;
            tr = tr->next;
        }
        if(tr != NULL)
        {
            n->next = tr;
            n->prev = pre;
            tr->prev = n;
            pre->next = n;
        }
        else
        {
            printf("\nValue Not Found..!\n");
        }
}

//*----------------------- Delete Operations -----------------------*//

NODE* dltfirst(NODE *start)
{
    NODE *del;
    if(start->next == NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        del = start;
        start->next->prev = NULL;
        start = start->next;
        free(del);
    }
    return start;
}

NODE* dltlast(NODE *start)
{
    NODE *tr  = start, *pre = NULL;
    if(start == NULL)
    {
        printf("\nLinked List is Empty..!\n");
    }
    else if(start->next == NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        while(tr->next != NULL)
        {
            pre = tr;
            tr = tr->next;
        }
        tr->prev->next = NULL;
        free(tr);
    }
    return start;
}

NODE* dltatpos(NODE *start, int pos)
{
    int i = 1;
    NODE *tr;
    if(start == NULL)
    {
        printf("\nLinked List is Empty..!\n");
    }
    else if(pos == 1)
    {
        tr = start;
        start->next->prev = NULL;
        start = start->next;
        free(tr);
    }
    else
    {
        tr = start;
        while(i != pos)
        {
            tr = tr->next;
            i++;
        }
        if(tr != NULL)
        {
            tr->prev->next = tr->next;
            if(tr->next != NULL)
            {
                tr->next->prev = tr->prev;
            }
            free(tr);
        }
        else
        {
            printf("\nInvalid Position\n");
        }
    }
    return start;
}

NODE* dltbefore(NODE *start, int val)
{
    NODE *tr = start;
    NODE *pre = NULL;
    if (val == start->data)
    {
        printf("\nNo value Before This\n");
    }
    else
    {
        if((start->next)->data == val)
        {
            start->next->prev = NULL;
            start = start->next;
            free(tr);
        }
        else
        {
            while (tr->next->data != val && tr->next != NULL)
                {
                    tr = tr->next;
                }
        if (tr->next != NULL)
                {
                    tr->prev->next = tr->next;
                    if(tr->next != NULL)
                    {
                        tr->next->prev = tr->prev;
                    }
                    free(tr);
                }
        else
                {
                    printf("\nNO value Found\n");
                }
            }
        }
    return start;
}

NODE* dltafter(NODE *start, int val)
{
    NODE *del;
    NODE *tr = start;
    NODE *pre;
    while (tr->data != val && tr != NULL)
    {
        tr = tr->next;
    }
    if (tr->next != NULL)
    {
        del = tr->next;
        tr->next = del->next;
        if(del->next != NULL)
        {
            del->next->prev = tr;
        }
        free(del);
    }
    else
    {
        printf("\nValue Not Found\n");
    }
    return start;
}

NODE* dltatval(NODE *start, int val)
{
    NODE *del;
    NODE *tr = start;
    NODE *pre = NULL;
    if (val == start->data)
    {
        del = start;
        start->next->prev = NULL;
        start = start->next;
        free(del);
        return start;
    }
    while (tr->data != val && tr->next != NULL)
    {
        pre = tr;
        tr = tr->next;
    }
    if (tr->next == NULL && tr->data != val)
    {
        printf("\nValue Not Found\n");
        return start;
    }
    else if (tr->next == NULL && tr->data == val)
    {
        tr->prev->next = NULL;
        free(tr);
        return start;
    }
    else
    {
        tr->prev->next = tr->next;
        tr->next->prev = pre;
        free(tr);
        return start;
    }
}

NODE* dltfirstoccu(NODE *start, int val)
{
    NODE *del;
    NODE *tr = start;
    NODE *pre;
    if (start->data == val)
    {
        del = start;
        start->next->prev = NULL;
        start = start->next;
        free(del);
        return start;
    }
    while (tr->data != val && tr->next != NULL)
    {
        pre = tr;
        tr = tr->next;
    }
    if (tr->next == NULL && tr->data != val)
    {
        printf("\nValue Not Found\n");
        return start;
    }
    else if (tr->next == NULL && tr->data == val)
    {
        tr->prev->next = NULL;
        free(tr);
        return start;
    }
    else
    {
        tr->prev->next = tr->next;
        tr->next->prev = pre;
        free(tr);
        return start;
    }
}

NODE* dltalloccu(NODE *start, int val)
{
    NODE *pre = start;
    int flag = 0;
    while (start->data == val)
    {
        pre = start;
        start = start->next;
        flag = 1;
        free(pre);
    }
    NODE *tr = start->next;
    while (tr != NULL)
    {
        if (tr->data == val && tr != NULL)
        {
            tr->prev->next = tr->next;
            tr->next->prev = pre;
            free(tr);
            flag = 1;
        }
        pre = tr;
        tr = tr->next;
    }
    if (flag == 0)
    {
        printf("\nValue Not Found\n");
        return start;
    }
    return start;
}

NODE* dltsorted(NODE *start, int val)
{
    NODE *del;
    NODE *tr = start;
    NODE *pre = NULL;
    if (start->data == val)
    {
        del = start;
        start->next->prev = NULL;
        start = start->next;
        free(del);
        return start;
    }
    else
    {
       tr = start->next;
       pre =start;
    while (tr->data < val && tr != NULL)
    {
        pre = tr;
        tr = tr->next;
    }
    if (tr->next == NULL && tr->data == val)
    {
        tr->prev->next = NULL;
        free(tr);
        return start;
    }
    else if(tr->data == val)
    {
        tr->prev->next = tr->next;
        tr->next->prev = pre;
        free(tr);
        return start;
    }
    else
    {
        printf("\nValue Not Found\n");
    }
    }
    return start;
}