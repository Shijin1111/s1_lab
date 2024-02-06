#include<stdio.h>
#include<stdlib.h>
#define max 10
int top=-1;
int a[max];
void push()
{
    int x;
    printf("\nenter the element to push");
    scanf("%d",&x);
    if(a[top]==max-1)
    {
        printf("\nstack overflow");
    }
    else{
        a[++top]=x;
    }
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("\nunderflow");
    }
    else
    {
        x=a[top];
        printf("\ndeleted element=%d",x);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nempty");
    }
    else
    {
        printf("\narray elements are");
        for(int i=0;i<=top;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\nenter choice");
        scanf("%d",&ch);
        if(ch==1)
        {
            push();
        }
        if(ch==2)
        {
            pop();
        }
        if(ch==3)
        {
            display();
        }
        if(ch==4)
        {
            exit(0);
        }
    }
}