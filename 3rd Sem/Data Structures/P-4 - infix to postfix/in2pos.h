#include<stdio.h>
    #include<stdlib.h>
    #define MAX 5

    typedef struct Stack {
        int data[MAX];
        int top;
    } Stack;

    void init(Stack *s){
        s->top = -1;
    }

    void push(Stack *s, int val)
    {
        if(s->top == MAX-1)
        {}
        else{
            s->top++;
            s->data[s->top]=val;
        }
    }

    int pop(Stack *s)
    {
        int val = NULL;
        if(s->top == -1)
        {}
        else
        {
            val = s->data[s->top];
            s->top--;
        }
        return val;
    }

    int peep(Stack *s)
    {
        int val = NULL;
        if(s->top == -1)
        {}
        else
        {
            val = s->data[s->top];
        }
        return val;
    }

    void change(Stack * s, int pos, int val)
    {
        int idx = s->top - pos + 1;
        if(s->top == -1)
        {}
        else{
            if(idx >= 0 && idx <= s->top)
            {
                s->data[idx] = val;
            }
            else{}
        }
    }

    void display(Stack *s)
    {
        int i;
        if(s->top == -1)
        {}
        else
            for(int i=0;i<=s->top;i++){
                printf("%c ",s->data[i]);
            }
    }

    int isEmpty(Stack *s)
    {
        if(s->top == -1)
            return 1;
        return 0;
    }

    int isFull(Stack *s)
    {
        if(s->top == -1)
            return 1;
        return 0;
    }