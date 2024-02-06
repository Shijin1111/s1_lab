#include<stdio.h>
#include<stdlib.h>
int duplicate(int a[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            printf("element already exists");
            return 1;
        }
    }
    return 0;
}
int universal(int u[],int n,int x)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(u[i]==x)
        {
            flag=1;
            return 1;
        }
    }
    if(flag==0)
    {
        printf("element must be in the universal set");
        return 0;
    }
}
void bitstring(int u[],int a[],int ba[],int n,int sa)
{
    int k=0;
    while(k!=n)
    {
        for(int i=0;i<sa;i++)
        {
            if(u[k]==a[i])
            {
                ba[k]=1;
                break;
            }
            else
            {
                ba[k]=0;
            }
        }
        k++;
    }
}
void unionset(int ba[],int bb[],int bc[],int n)
{
    int k=0;
    while (k!=n)
    {
        if(ba[k]==1 || bb[k]==1)
        {
            bc[k]=1;
        }
        else
            bc[k]=0;
        k++;
    }
}
void intersectionset(int ba[],int bb[],int bc[],int n)
{
    int k=0;
    while (k!=n)
    {
        if(ba[k]==1 && bb[k]==1)
        {
            bc[k]=1;
        }
        else
            bc[k]=0;
        k++;
    }
}
void main()
{
    int n,sa,sb;
    printf("\nenter the size of universal set");
    scanf("%d",&n);
    int u[n],a[n],b[n],ba[n],bb[n],un[n],in[n];
    for(int i=0;i<n;i++)
    {
        int x;
        printf("\nenter the universal set element");
        scanf("%d",&x);
        if(duplicate(u,i,x)==0)
        {
            u[i]=x;
        }
        else
        {
            i--;
        }
    }
    printf("\nuniversal set elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d",u[i]);
    }
    printf("enter the size of set A");
    scanf("%d",&sa);
    if(sa>n)
    {
        printf("setA cannot be greater than universal set");
        sa=n;
    }
    printf("\nenter the setA elements");
    for(int i=0;i<sa;i++)
    {
        int x;
        scanf("%d",&x);
        if(duplicate(a,i,x)==0 && universal(u,n,x)==1)
        {
            a[i]=x;
        }
        else
        {
            i--;
        }
    }
    printf("\nsetA elements are:");
    for(int i=0;i<sa;i++)
    {
        printf("%d",a[i]);
    }
    printf("enter the size of setB");
    scanf("%d",&sb);
    if(sb>n)
    {
        printf("setB cannot be greater than universal set");
        sb=n;
    }
    printf("\nenter the setB elements");
    for(int i=0;i<sb;i++)
    {
        int x;
        scanf("%d",&x);
        if(duplicate(b,i,x)==0 && universal(u,n,x)==1)
        {
            b[i]=x;
        }
        else
        {
            i--;
        }
    }
    printf("\nsetB elements are:");
    for(int i=0;i<sb;i++)
    {
        printf("%d",b[i]);
    }
    bitstring(u,a,ba,n,sa);
    bitstring(u,b,bb,n,sb);
    printf("\n bit vector of setA :");
    for(int i=0;i<n;i++)
    {
        printf("%d",ba[i]);
    }
    printf("\n bit vector of setB :");
    for(int i=0;i<n;i++)
    {
        printf("%d",bb[i]);
    }
    unionset(ba,bb,un,n);
    intersectionset(ba,bb,in,n);
    printf("\n union vector of setA setB :");
    for(int i=0;i<n;i++)
    {
        printf("%d",un[i]);
    }
    printf("\n inetersection vector of setB :");
    for(int i=0;i<n;i++)
    {
        printf("%d",in[i]);
    }
}