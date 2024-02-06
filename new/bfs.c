#include<stdio.h>
#include<stdlib.h>
int max=10,rear=-1,front=-1,a[10];
void enqueue(int n)
{
    if(rear==max-1)
    {
        return;
    }
    else if(rear==-1)
    {
        front=0;
    }
    rear++;
    a[rear]=n;
}
int dequeue()
{
    if(front==-1)
    {
        return -1;
    }
    int val=a[front];
    front++;
    return val;
}
void main()
{
    int n;
    printf("enter the number of vertices");
    scanf("%d",&n);
    int a[n][n],v[n],start;
    printf("enter the adjacency matrix");
    for(int i=0;i<n;i++)
    {
        v[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the starting matrix");
    scanf("%d",&start);
    printf("bfs traversal:");
    enqueue(start);
    v[start]=1;
    while(front<=rear)
    {
        start=dequeue();
        printf("%d",start);
        for(int i=0;i<n;i++)
        {
            if(a[start][i]==1 && v[i]==0)
            {
                enqueue(i);
                v[i]=1;
            }
        }
    }
}
