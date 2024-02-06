#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("enter the  number of vertices");
    scanf("%d",&n);
    int a[n][n],vi[n],u,v,min=999,cost,e=1;
    printf("enter the adjascency matrix");
    for(int i=0;i<n;i++)
    {
        vi[i]=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                a[i][j]=999;
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
                u=i;
                v=j;
            }
        }
    }
    cost+=min;
    vi[u]=1;
    vi[v]=1;
    printf("spanning tree\nedege{%d,%d}=%d",u,v,min);
    while(e<n-1)
    {
        min=999;
        for(int i=0;i<n;i++)
        {
            if(vi[i]==1)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[i][j]<min && vi[j]==0)
                    {
                        min=a[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        cost+=min;
        vi[v]=1;
		printf("Edge {%d,%d}= %d\n",u,v,min);
        e++;
    }
    printf("cost=%d",cost);
}