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

void qdisplay(NODE *start)
{
    NODE *tr = start;

    if(start == NULL)
        printf("\nQueue is Empty..!\n");
    else
    {
        printf("\nQueue Contains:\n");
        while(tr != NULL)
        {
            printf("%d\t",tr->data);
            tr = tr->next;
        }
    }
}

//*----------------------- Insertion Operations -----------------------*//


NODE* qinsert(NODE *start, int val)
{
    NODE *tr = start;
    NODE *n = createnode();
    n->data = val;
    if(start == NULL)           // Insert First Code
    {
        n->next = start;
        start = n;
        printf("\nValue inserted\n");
    }
    else
    {
        while(tr->next != NULL)
    {
        tr = tr->next;
    }
    tr->next = n;
    n->next = NULL;
    printf("\nValue inserted\n");
    }
    return start;
}

NODE* qdelete(NODE *start)
{
    NODE *del = start;
    if(start == NULL)
    {
        printf("\nQueue is Empty..!\n");
    }
    else
    {
        start = start->next;
        free(del);
        printf("\nValue Deleted\n");
    }
    return start;
}

void qpeek(NODE *start)
{
    if(start == NULL)
    {
        printf("\nQueue is Empty..!\n");
    }
    else
    {
        printf("\nFront Value of Queue is %d\n",start->data);
    }
}

void qchange(NODE *start, int pos, int val)
{
    int i = 1;
    NODE *tr = start;
    if(start == NULL)
    {
        printf("\nStack is Empty..! Nothing To Change\n");
    }
    else
    {
            while(tr != NULL && i != pos)
            {
                tr = tr->next;
                i++;
            }
            if(tr != NULL)
            {
                tr->data = val;
                printf("\nValue Changed\n");
            }
            else
            {
                printf("\nInvalid Position..!\n");
            }
    }
}

int isEmpty(start)
{
    if(start == NULL)
        return 1;
    else
        return 0;
}