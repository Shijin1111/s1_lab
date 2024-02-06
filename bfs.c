//bfs traversal
#include<stdio.h>
#include<stdlib.h>
int a[10],MAX=10,rear=-1,front=-1;
void enqueue(int n)
{
    if(rear==MAX-1)
    {
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear+=1;
    a[rear]=n;
}
int dequeue()
{
    if(front==-1)
    {
        return -1;
    }
    int v=a[front];
    front=+1;
    return v;
}
void main()
{
    int n,start;
    printf("enter the number of vertices");
    scanf("%d",&n);
    printf("enter the starting vertex");
    scanf("%d",&start);
    int a[n][n],v[n];
    printf("enter the adjascency matrix");
    for(int i=0;i<n;i++)
    {
        v[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n bfs traversal:");
    enqueue(start);
    v[start]=1;
    while(front<=rear)
    {
        start=dequeue();
        printf("%d",start);
        for(int i=0;i<n;i++)
        {
            if(a[start][i]==1  && v[i]==0)
            {
                enqueue(i);
                v[i]=1;
            }
        }
    }
}