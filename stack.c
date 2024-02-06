#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int st[MAX];
int top=-1;
void push()
{
    int x;
    if(top==MAX-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        printf("enter the value to be inserted");
        scanf("%d",&x);
        st[top]=x;
    }
}
void pop()
{
    int temp;
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        temp=st[top];
        top--;
        printf("deleted element is%d",temp);
    }
}
void dis()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        for(int i=top;i>=0;--i)
        {
            printf("%d\n",st[i]);
        }
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                dis();
                break;
            case 4:
                exit(0);
        }
    }

}