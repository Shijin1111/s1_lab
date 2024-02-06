#include<stdio.h>
#include<stdlib.h>
int q[5],front=-1,rear=-1,MAX=10;
void enqueue()
{
    if((rear+1)%MAX==front)
    {
        printf("overflow\n");
    }
    else
    {
        int x;
        printf("enter the element to be inserted\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
            q[rear]=x;
        }
        else
        {
            rear=(rear+1)%MAX;
            q[rear]=x;
        }
    }
}
void dequeue()
{
    if(front==-1||front==rear+1)
    {
        printf("queue underflow\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%MAX;
    }
}
void display()
{
    if(front==-1||rear==-1)
    {
        printf("queue underflow\n");
    }
    else
    {
        for(int i=front;i<=rear;i=(i+1)%MAX)
        {
            printf("%d\t",q[i]);
        }
    }
}
void main()
{
    while(1)
    {
        printf("\n1.enqueue\t2.dequeue\t3.display\t4.exit\nenter your choice\n");
        int ch;
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