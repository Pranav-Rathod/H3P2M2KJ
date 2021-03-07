#include <stdio.h>
#include <stdlib.h>
#define MAX 5

//Stack Definition
typedef struct Stack
{
    int data[MAX];
    int top;
} STACK;

//initialize
void init(STACK *s)
{
    s->top = -1;                                  //initialize Top Variable With "-1".
    printf("\nStack initialized\n");
}

//Push
void push(STACK *s, int val)
{
    if (s->top == MAX-1)                            // Check Weather Stack Has Empty Space To insert Value Or Not.
        printf("\nStack is Full\n");
    else
    {
        s->top++;
        s->data[s->top] = val;                    // Save Given value in The Data Array at index Given by Top.
        printf("\nValue inserted\n");
    }
}

//Pop
int pop(STACK *s)
{
    int val;                                 // Local Variable initialize With "NULL".
    if (s->top == -1)
        printf("\nStack Underflow\n");
    else
    {
        val = s->data[s->top];                      // Retrieve Value From Our Data Array at Top Position "(s->top)".
        s->top--;                                   // Decrease Top With "-1" Will Virtually Remove Upper Value And Navigate To Next Value.
    }
    return val;
}

//peep
int peep(STACK *s)
{
    int val;                                 // Local Variable initialize With "NULL".
    if (s->top == -1)
        printf("\nStack Underflow\n");
    else
        val = s->data[s->top];
    return val;
}

//Change
void change(STACK *s, int pos, int val)
{
    int idx = s->top - pos + 1;                    // Convert Given Position To index
    if (s->top == -1)
        printf("\nStack is Empty, Nothing To Change\n");
    else
    {
        if (idx >= 0  &&  idx <= s->top)
        {
            s->data[idx] = val;
            printf("\nValue Changed\n");
        }
        else
            printf("\ninvalid Position\n");
    }
}

//Display
void display(STACK *s)
{
    int i;
    if (s->top == -1)                               // Check if Stack is Empty Or Not.
        printf("\nYour Stack is Empty\n");
    else
    {
        printf("\nStack Have Following Value\n");
        for (i=s->top; i>=0; i--)                   // i Starts With Top Value So "S->Top", Go Backward Until "i>=0". We Move Top To Bottom So We Decrease Our "i".
            printf("%d\n",s -> data[i]);    // Value Comes From Data Array at index "i".
    }
}

//isEmpty
int isEmpty(STACK *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}

//isFull
int isFull(STACK *s)
{
    if (s->top == MAX -1)
        return 1;
    return 0;
}