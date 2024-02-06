#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int a[50],i;
void insert()
{
    int pos,x,temp;
    printf("enter the position to insert");
    scanf("%d,&pos");
    printf("enter the element to insert");
    scanf("%d,&x");
    if(pos>=MAX)
    {
        printf("invalid position");
    }
    else 
    {
        for(int i=MAX-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=x;
    }
    printf("after insertion");
    for(int i=0;i<MAX;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    insert();
}