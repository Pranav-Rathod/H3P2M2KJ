#include<stdio.h>
#include<stdio.h>
#define MAX 5

typedef struct CQUEUE
{
    int data[MAX];
    int f,r;
}cqueue;

void cinit(cqueue *q)
{
    q->f = -1;
    q->r = -1;
    printf("\nQueue inited\n");
}

void cinsrt(cqueue *q, int val)
{
    if((q->f == 0 && q->r == MAX-1) || (q->f == q->r + 1))
    {
        printf("\nQueue Overflow\n");
    }
    else
    {
        if(q->f == -1 && q->r == -1)
        {
            q->f = 0;
            q->r = 0;
        }
        else
        {
            q->r = (q->r + 1) % MAX;
        }
        q->data[q->r] = val;
        printf("\nValue inserted\n");
    }
}

int cdlt(cqueue *q)
{
    int val = NULL;
    if(q->f == -1 && q->r == -1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        val = q->data[q->f];
        if(q->f == q->r)
        {
            q->f = -1;
            q->r = -1;
        }
        else
        {
            q->f = (q->f + 1) % MAX;
        }
    }
    return val;
}

int cpeek(cqueue *q)
{
    int val = NULL;
    if(q->f == -1 && q->r == -1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        val = q->data[q->f];
    }
    return val;
}

void cchng(cqueue *q, int pos, int val)
{
    int idx = (q->f + pos -1) % MAX;
    if(q->f == -1 && q->r == -1)
    {
        printf("\nQueue Underflow\n");
    }
    else
    {
        if(((q->f <= q->r) && (idx>=q->f && idx<=q->r)) || ((q->f > q->r) && (idx >= q->f && idx <= MAX-1) || (idx >= 0 && idx <= q->r)))
        {
            q->data[idx] = val;
            printf("\nValue Changed\n");
        }
        else
        {
            printf("\ninvalid position\n");
        }
    }
}

void cdisply(cqueue *q)
{
    int i;
    if(q->f == -1 && q->r == -1)
    {
        printf("\nQueue Empty\n");
    }
    else
    {
        printf("\nQueue Contains: \n");
        if(q->f <= q->r)
        {
            for(i=q->f ; i<=q->r ; i++)
            {
                printf("%d\t",q->data[i]);
            }
        }
        else
        {
         for(i=q->f ; i<=MAX-1 ; i++)
            {
                printf("%d\t",q->data[i]);
            }
            for(i=0 ; i<=q->r ; i++)
            {
                printf("%d\t",q->data[i]);
            }
        }
    }
}

int isEmpty(cqueue *q)
{
    if(q->f == -1 && q->r == -1)
        return 1;
    return 0;
}

int isFull(cqueue *q)
{
    if((q->f == 0 && q->r == MAX - 1) || (q->f == q->r + 1))
        return 1;
    return 0;
}