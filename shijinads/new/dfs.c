#include<stdio.h>
#include<stdlib.h>
void dfs(int n,int start,int a[n][n],int v[n])
{
    if(v[start]!=1)
    {
        v[start]=1;
        printf("%d",start);
        for(int i=0;i<n;i++)
        {
            if(a[start][i]==1 && v[i]==0)
            {
                dfs(n,i,a,v);
            }
        }
    }
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
    printf("dfs traversal:");
    dfs(n,start,a,v);
}