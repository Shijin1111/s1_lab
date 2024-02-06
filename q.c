#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX],front=-1,rear=-1;
void enqueue()
{   
    int x;
    if(rear==MAX-1)
        printf("overflow");
    else {
        if(front==-1)
            front=0;
        printf("enter the element to be inserted ");
        scanf("%d",&x);
        rear=rear+1;
        q[rear]=x;
    }
}
void dequeue()
{
    if(front==-1)
        printf("underflow");
    else
    {
        printf("element deleted is %d",q[front]);
        front=front+1;
    }
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
}
int main()
{
    int ch;
    while(1)
    {
    printf("enter your choice");
    scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}