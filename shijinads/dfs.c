//dfs traversal
#include<stdio.h>
#include<stdlib.h>
void dfs(int s,int n,int a[n][n],int v[n])
{
    if(v[s]!=1)
    {
        printf("%d",s);
        v[s]=1;
        for(int i=0;i<n;i++)
        {
            if(a[s][i]==1 && v[i]==0)
            {
                dfs(i,n,a,v);
            }
        }
    }
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
    dfs(start,n,a,v);
}