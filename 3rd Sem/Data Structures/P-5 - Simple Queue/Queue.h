#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct queue
{
    int data[MAX];
    int f,r;
} Queue;

void qinit(Queue *q)
{
    q->f = -1;
    q->r = -1;
    printf("Queue initialized\n");
}

void qinsert(Queue *q, int val)
{
    if(q->r == MAX-1)
    {
        printf("Queue overflow.\n");
    }
    else
    {
        if(q->f ==-1 && q->r ==-1)
        {
            q->f = 0;
            q->r = 0;
        }
        else
        {
            q->r++;
        }

        q->data[q->r] = val;
        printf("Value inserted.\n");
    }
}

int qdelete(Queue *q)
{
    int val = NULL;
    if(q->f == -1 || q->f > q->r)
    {
        printf("Queue underflow.\n");
    }
    else
    {
        val = q->data[q->f];
        q->f++;
    }
    return val;
}

int qpeek(Queue *q)
{
    int val = NULL;
    if(q->f == -1 || q->f > q->r)
    {
        printf("Queue underflow.\n");
    }
    else
    {
        val = q->data[q->f];
    }
    return val;
}

void qchange(Queue *q,int pos, int val)
{
    int idx = q->f + pos - 1;
    if(q->f == -1 || q->f > q->r)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if(idx >= q->f && idx <= q->r)
        {
            q->data[idx] = val;
            printf("Value changed.\n");
        }
        else
        {
            printf("invalid position.\n");
        }
    }
}

void qdisplay(Queue *q)
{
    if(q->f == -1 || q->f > q->r)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue contains.\n");
        for(int i=q->f;i<=q->r;i++)
        {
            printf("%d ",q->data[i]);
        }
        printf("\n");
    }
}

int isEmpty(Queue *q){
    if(q->f == -1 || q->f > q->r)
        return 1;
    return 0;
}

int isFull(Queue *q){
    if(q->f == -1 && q->f < q->r)
        return 1;
    return 0;
}