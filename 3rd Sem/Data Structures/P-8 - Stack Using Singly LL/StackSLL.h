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
        printf("\nStack is Empty..!\n");
    else
    {
        printf("\nStack Contains:\n");
        while(tr != NULL)
        {
            printf("%d\n",tr->data);
            tr = tr->next;
        }
    }
}

//*----------------------- Insertion Operations -----------------------*//


NODE* push(NODE *start, int val)
{
    NODE *n = createnode();
    n->data = val;
    n->next = start;
    start = n;
    printf("\nValue inserted\n");
    return start;
}

NODE* pop(NODE *start)
{
    NODE *del = start;
    if(start == NULL)
    {
        printf("\nStack is Empty..!\n");
    }
    else
    {
        start = start->next;
        free(del);
        printf("\nValue Deleted\n");
    }
    return start;
}

void peep(NODE *start)
{
    if(start == NULL)
    {
        printf("\nStack is Empty..!\n");
    }
    else
    {
        printf("\nTop of the stack is %d\n",start->data);
    }
}

void change(NODE *start, int pos, int val)
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