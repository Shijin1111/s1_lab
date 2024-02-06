#include <stdio.h>
#include <stdlib.h>
int max=10,front=-1,rear=-1,a[10];
void enqueue(int n)
{
    if(rear=max-1)
    return;
    if(rear==-1)
    {
        front=0;
    }
    rear++;
    a[front]=n;
}
int dequeue()
{
    if(front==-1)
        return -1;
    int v=a[front];
    front++;
    return v;
}
int cycle(int u,int v,int n,int a[n][n])
{
    int v1[n];
    for(int i=0;i<n;i++)
    {
        v1[i]=0;
    }
    int start=u,c=0;
    
}
void main()
{
    int n;
    printf("enter the number of nodes");
    scanf("%d",&n);
    int A[n][n],a[n][n],cost=0,u,v,min=999,e=1;
    printf("Enter the cost adjacency matrix of the graph: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(A[i][j]==0)
            {
                A[i][j]=999;
            }
            a[i][j]=0;
        }
    }
    printf("minimum cost spanning tree\n");
    while(e<n)
    {
        min=999;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]<min)
                {
                    
                }
            }
        }
    }
}