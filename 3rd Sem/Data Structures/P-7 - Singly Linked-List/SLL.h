typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE* createnode()
{
    NODE *n = (NODE *)malloc(sizeof(NODE));
    n->data = NULL;
    n->next = NULL;
    return n;
}

void display(NODE *start)
{
    NODE *tr = start;

    if(start == NULL)
        printf("\nLinked List is Empty..!\n");
    else
    {
        printf("\nLinked List Contains:\n");
        while(tr != NULL)
        {
            printf("%d",tr->data);
            if(tr->next != NULL)
                printf(" -> ");
            tr = tr->next;
        }
    }
}

//*----------------------- Insertion Operations -----------------------*//


NODE* insertfirst(NODE *start, int val)
{
    NODE *n = createnode();
    n->data = val;
    n->next = start;
    start = n;

    return start;
}

NODE* insertlast(NODE *start, int val)
{
    NODE *tr = start;
    NODE *n = createnode();
    n->data = val;

    if(start == NULL)           // Insert First Code
    {
        n->next = start;
        start = n;
      //start = insertfirst(start, val);
    }
    else
    {
        while(tr->next != NULL)
    {
        tr = tr->next;
    }
    tr->next = n;
    n->next = NULL;
    }
    return start;
}

NODE* insertatpos(NODE *start, int pos, int val)
{
    int i = 1;
    NODE *pre;
    NODE *tr = start;
    if(pos == 1)           // Insert First Code
    {
        start = insertfirst(start, val);
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
                NODE *n = createnode();
                n->data = val;
                n->next = tr;
                pre->next = n;
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
    NODE *tr = start, *pre = NULL;
    NODE *n = createnode();
    n->data = val;

    if(start->data == eval)      // Insert First
    {
        start = insertfirst(start, val);
    }
    else
    {
        while(tr->data != eval)
        {
            pre = tr;
            tr = tr->next;
        }
        if(tr != NULL)
        {
            n->next = tr;
            pre->next = n;
        }
        else
        {
            printf("\nValue Not Found..!\n");
        }
    }
    return start;
}

/*void insertafter(NODE *start, int eval, int val)
{
    NODE *tr;
    NODE *n = createnode();
    n->data = val;

        tr = start;
        while(tr->data != eval)
        {
            tr = tr->next;
        }
        if(tr != NULL)
        {
            n->next = tr->next;
            tr->next = n;
        }
        else
        {
            printf("\nValue Not Found..!\n");
        }
}*/

void insertafter(NODE *start, int eval, int val)
{
    NODE *tr = start;
    NODE *pre = NULL;
    NODE *n = createnode();
    n->data = val;

        while(tr->data != eval)
        {
            pre = tr;
            tr = tr->next;
        }

        if(tr != NULL)
        {
            pre = tr;
            tr = tr->next;
            
            n->next = tr;
            pre->next = n;
        }
        else if(tr->next == NULL)
        {
            n->next = NULL;
            pre->next = n;
        }
        else
        {
            printf("\nValue Not Found..!\n");
        }
}

void insertsorted(NODE *start, int nval)
{
    NODE *tr , *pre = NULL;
    NODE *n = createnode();
    n->data = nval;

        tr = start;
        while(tr->data <= nval)
        {
            pre = tr;
            tr = tr->next;
        }
        if(tr != NULL)
        {
            n->next = tr;
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
    if(start == NULL)
    {
        printf("\nLinked List is Empty..!\n");
    }
    else
    {
        del = start;
        start = start->next;
        free(del);
    }
    return start;
}

NODE* dltlast(NODE *start)
{
    NODE *tr, *pre = NULL;
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
        tr = start;
        while(tr->next != NULL)
        {
            pre = tr;
            tr = tr->next;
        }
        pre->next = NULL;
        free(tr);
    }
    return start;
}

NODE* dltatpos(NODE *start, int pos)
{
    int i = 1;
    NODE *tr, *pre = NULL;
    if(start == NULL)
    {
        printf("\nLinked List is Empty..!\n");
    }
    else if(pos == 1)
    {
        tr = start;
        start = start->next;
        free(tr);
    }
    else
    {
        tr = start;
        while(i < pos)
        {
            pre = tr;
            tr = tr->next;
            i++;
        }
        if(tr != NULL)
        {
            pre->next = tr->next;
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
            start = start->next;
            free(tr);
        }
        else
        {
            while ((tr->next)->data != val && tr->next != NULL)
                {
                    pre = tr;
                    tr = tr->next;
                }
                if (tr->next == NULL)
                {
                    printf("\nNO value Found\n");
                }
                else
                {
                    pre->next = tr->next;
                    free(tr);
                    return start;
                }
            }
        }
    return start;
}

/*NODE* dltafter(NODE *start, int val)
{
    NODE *tr = start;
    NODE *pre;
    while (tr->data != val && tr->next != NULL)
    {
        tr = tr->next;
    }
    if (tr->next != NULL)
    {
        pre = tr->next;
        tr->next = (tr->next)->next;
        free(pre);
    }
    else
    {
        printf("\nValue Not Found\n");
    }
    return start;
} */

void dltafter(NODE *start, int val)
{
    NODE *tr = start;
    NODE *del;
    while (tr->data != val)
    {
        tr = tr->next;
    }
    if (tr != NULL)
    {
        del = tr->next;
        tr->next = del->next;
        free(del);
    }
    else
    {
        printf("\nValue Not Found\n");
    }
}

NODE* dltatval(NODE *start, int val)
{
    NODE *tr = start;
    NODE *pre = NULL;
    if (val == start->data)
    {
        start = start->next;
        free(tr);
        return start;
    }
    else
    {
        while (tr->data != val)
        {
            pre = tr;
            tr = tr->next;
        }
        if (tr->next == NULL && tr->data != val)
        {
            printf("\nValue Not Found\n");
        }
        else if (tr->next == NULL && tr->data == val)
        {
            pre->next = NULL;
            free(tr);
        }
        else
        {
            pre->next = tr->next;
            free(tr);
        }
    }
    return start;
}

NODE* dltsorted(NODE *start, int val)
{
    NODE *tr = start;
    NODE *pre = NULL;
    if (start->data == val)
    {
        start = start->next;
        free(tr);
        return start;
    }
    else
    {
        tr = start->next;
        pre = start;
        while (tr->data < val && tr != NULL)
        {
            pre = tr;
            tr = tr->next;
        }
        if (tr->next == NULL && tr->data != val)
        {
            printf("\nValue Not Found\n");
        }
        else if (tr->next == NULL && tr->data == val)
        {
            pre->next = NULL;
            free(tr);
        }
        else
        {
            pre->next = tr->next;
            free(tr);
        }
    }
    return start;
}

NODE* dltalloccu(NODE *start, int val)
{
    int flag = 0;
    NODE *pre = start;
    NODE *tr = start->next;

    while (tr != NULL)
    {
        if (tr->data == val)
        {
            pre->next = tr->next;
            free(tr);
            tr = pre;
            flag = 1;
        }
        else if(start->data == val)
        {
            start = start->next;
            flag = 1;
            free(pre);
        }
        else if(tr->next == NULL && tr->data == val)
        {
            pre->next = NULL;
            free(tr);
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

NODE* dltfirstoccu(NODE *start, int val)
{
    NODE *tr = start;
    NODE *pre;
    if (start->data == val)
    {
        pre = start;
        start = start->next;
        free(pre);
        return start;
    }
    while (tr->data != val && tr != NULL)
    {
        pre = tr;
        tr = tr->next;
    }
    if (tr == NULL && tr->data != val)
    {
        printf("\nValue Not Found\n");
        return start;
    }
    else if (tr->next == NULL && tr->data == val)
    {
        pre->next = NULL;
        free(tr);
        return start;
    }
    else
    {
        pre->next = tr->next;
        free(tr);
        return start;
    }
}