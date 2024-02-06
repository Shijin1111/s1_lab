#include<stdio.h>
int a[10];
void insert()
{
    printf("enter the value to insert");
    int x;
    scanf("%d",&x);
    int ch;
    printf("enter the choice");
    scanf("%d",&ch);
    if(ch==1)
    {
        for(int i=10;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=x;
    }
}