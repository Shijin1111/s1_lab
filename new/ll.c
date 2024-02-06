#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
};
struct node *head,*temp;
void insertatbeg()
{
    int info;
    printf("enter the element to insert");
    scanf("%d",&info);
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(!new)
    {
        printf("memory allocation failed");
    }
    else
    {
    new->data=info;
    new->nxt=head;
    head=new;
    }
}
void insertatend()
{
    int info;
    printf("enter the element to insert");
    scanf("%d",&info);
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(!new)
    {
        printf("memory allocation failed");
    }
    else
    {
    temp=head;
    while(temp->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    new->data=info;
    new->nxt=NULL;
    temp->nxt=new;
    }
}
void insertatpos()
{
    int info,pos;
    printf("enter the element to insert");
    scanf("%d",&info);
    printf("enter the position to insert");
    scanf("%d",&pos);
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(!new)
    {
        printf("memory allocation failed");
    }
    else
    {
    if(head==NULL||pos==1)
    {
        new->data=info;
        new->nxt=head;
        head=new; 
    }
    else{
        temp=head;
        for(int i=2;i<pos;i++)
        {
            temp=temp->nxt;
        }
        new->nxt=temp->nxt;
        temp->nxt=new;
        new->data=info;
    }

    }
}
void deleteatbeg()
{
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        int d=head->data;
        temp=head;
        head=head->nxt;
        free(temp);
        printf("%d is deleted",d);
    }
}
void deleteatpos()
{
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
    int pos;
    printf("enter the position to insert");
    scanf("%d",&pos);
    temp=head;
    struct node *pre;
    for(int i=1;i<pos;i++)
    {
        pre=temp;
        temp=temp->nxt;

    }
        int d=temp->data;
        pre->nxt=temp->nxt;
        free(temp);
        printf("%d is deleted",d);
    }
}
void deleteatend()
{
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
    temp=head;
    struct node *pre;
    while(temp->nxt!=NULL)
    {
        pre=temp;
        temp=temp->nxt;
    }
        int d=temp->data;
        pre->nxt=NULL;
        free(temp);
        printf("%d is deleted",d);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->nxt;
    }
    }
}
void main()
{
while(1)
{
    int ch;
    printf("enter choice");
    scanf("%d",&ch);
    if(ch==1)
        insertatbeg();
    else if(ch==2)
        insertatpos();
    else if(ch==3)
        insertatend();
    else if(ch==4)
        deleteatbeg();
    else if(ch==5)
        deleteatpos();
    else if(ch==6)
        deleteatend();
    else if(ch==7)
        deleteatpos();
    else if(ch==8)
        display();
}
}