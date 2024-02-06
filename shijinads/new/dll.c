#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *nxt,*pre;
};
struct node *head,*temp;
void insertatbeg()
{
    int info;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(!new)
    {
        printf("memeory allocation failed");
    }
    else
    {
        printf("enter the value to be inserted");
        scanf("%d",&info);
        if(head==NULL)
        {
        new->data=info;
        new->nxt=head->nxt;
        new->pre=NULL;
        head=new;
        }
        else
        {
            new->data=info;
            new->nxt=head->nxt;
            new->pre=
        }
    }
}