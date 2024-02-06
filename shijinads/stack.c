#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(int s[])
{
    if(top==2)
    {
        printf("stack overflow\n");
    }
    else
    {
        int x;
        printf("enter the value to push\n");
        scanf("%d",&x);
        top++;
        s[top]=x;
    }
}
void pop(int s[])
{
    int x;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        x=s[top];
        top--;
        printf("%d is popped\n",x);
    }
}
void display(int s[])
{
    if (top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack =");
        for(int i=0;i<top;i++)
        {
            printf("%d\t",s[i]);
        }
    }
}
void main()
{
    int s[5],ch;
    while(1)
    {
        printf("1.push\t2.pop\t3.peak\t4.display\t5.exit\nenter your choice\n ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push(s);
                break;
            }
            case 2:
            {
                pop(s);
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                display(s);
                break;
            }
            case 5:
            {
                exit(0);
            }
        }
    }
}