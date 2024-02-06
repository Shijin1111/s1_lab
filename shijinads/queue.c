#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX],front=-1,rear=-1;
void display()
{
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",q[i]);
        }
    }
}
void enqueue()
{
    if(rear==MAX-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        int x;
        printf("enter the element to be inserted\n");
        scanf("%d",&x);
        if(front==-1)
        {
            front=0;
        }
        rear+=1;
        q[rear]=x;
    }
}
void dequeue()
{
    if(front==-1||front==rear+1)
    {
        printf("queue underflow\n");
    }
    else
    {
        int x;
        x=q[front];
        front+=1;
        printf("\nthe element deleted is %d\n",x);
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