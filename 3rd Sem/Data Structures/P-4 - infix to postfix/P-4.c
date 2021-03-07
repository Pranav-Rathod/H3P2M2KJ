
/* =============================================================================
    Implement a program to convert infix notation to postfix notation using
    stack.
============================================================================== */

#include<stdio.h>
#include<stdlib.h>
#include"in2pos.h"

int isOperator(char ch)
    {
        switch(ch)
        {
            case '^':
            case '*':
            case '/':
            case '%':
            case '+':
            case '-': return 1;
            default : return 0;
        }
    }

    int getPrec(char ch)
    {
        switch(ch)
        {
            case '^': return 3;
            case '*':
            case '/':
            case '%': return 2;
            case '+':
            case '-': return 1;
            case '(': return 0;
            default : return -1;
        }
    }

    void intopost(char *in,char *post)
    {
        char ch,*output=post;
        Stack s;
        init(&s);

        printf("\n==========================================================\n");
        printf("I/P\t\tStack\t\tO/P");
        printf("\n==========================================================\n");

        while(*in != '\0')
        {
            if(*in == '(')
            {
                push(&s,'(');
            }
            else if(*in == ')')
            {
                while((ch=pop(&s)) != '(')
                {
                    *post=ch;
                    post++;
                }
            }
            else if(isOperator(*in))
            {
                while(getPrec(*in)  <=  getPrec(peep(&s)))
                {
                    *post = pop(&s);
                    post++;
                }
                push(&s,*in);
            }
            else
            {
                *post = *in;
                post++;
            }

            printf("%c\t\t",*in);
            display(&s);
            printf("\t\t%s\n",output);

            in++;
        }

        while(!isEmpty(&s))
        {
            *post = pop(&s);
            post++;
        }

        printf("%c\t\t",*in);
        display(&s);
        printf("\t\t%s",output);
        printf("\n==========================================================\n");

    }

    int main()
    {
        char in[50]="",post[50]="";

        printf("Enter infix expression: ");
        scanf("%s",in);

        intopost(in,post);

        printf("Postfix expression: %s\n",post);

    }