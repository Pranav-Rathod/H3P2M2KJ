#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


int main(void)
{
    int pid;
    pid = fork();

    printf("\nPranav Rathod - 91900103062");
    if(pid<0)
    {
        printf("\n Error");
        exit(1);
    }
    else if(pid==0)
    {
        printf("\nHello Child Process");
        printf("\nMy id : %d \nparent id : %d \n", getpid(), getppid());
        exit(0);
    }
    else{
        printf("\n\nHello parent Process");
        printf("\nMy id : %d \nparent id : %d \nparent id : %d\n",getpid(), getppid());
        exit(1);
    }
    return 0;
}