#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
};
struct node *head=NULL,*temp,*del;
void insertatbeg()
{
    int data;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to be inserted in the newnode");
    scanf("%d",&data);
    if(new==NULL)
    {
        printf("size doesnt allocated");
    }
    else
    {
        new->data=data;
        new->nxt=head;
        head=new;
    }
}
void insertatend()
{
    int data;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to be inserted in the newnode");
    scanf("%d",&data);
    if(new==NULL)
    {
        printf("size doesnt allocated");
    }
    else
    {
        new->data=data;
        if(head==NULL)
        {
            new->nxt=NULL;
            head=new;
        }
        else
        {
        temp=head;
        while(temp->nxt!=NULL)
        {
            temp=temp->nxt;
        }
        temp->nxt=new;
        new->nxt=NULL;
        }
    }
}
void insertatpos()
{
    int data,pos;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory allocation failed");
    }
    else
    {
        printf("enter position to be inserted");
        scanf("%d",&pos);
        printf("enter value to be inserted");
        scanf("%d",&data);
        temp=head;
        int i=0;
        while(i<pos-2)
        {
            temp=temp->nxt;
            i++;
        }
        new->data=data;
        new->nxt=temp->nxt;
        temp->nxt=new;
    }
}
void deleteatbeg()
{
    if(head==NULL)
    {
        printf("underflow");
    }
    else
    {
        temp=head;
        head=head->nxt;
        int d=temp->data;
        free(temp);
        printf("\n deleted value is %d",d);
    }
}
void deleteatend()
{
    if(head==NULL)
    {
        printf("underflow");
        return;
    }
    else
    {
        temp=head;
        while((temp->nxt)->nxt!=NULL)
        {
            temp=temp->nxt;
        }
        printf("%d temp value is",temp->data);
        int d=(temp->nxt)->data;
        temp->nxt=NULL;
        free(temp->nxt);
        printf("\n deleted value is %d",d);       
    }
}
void deleteatpos()
{
    int pos,i=0;
    if(head==NULL)
    {
        printf("underflow");
        return;
    }
    else
    {
        temp=head;
        printf("enter position to be inserted");
        scanf("%d",&pos);
        while(i<pos-2)
        {
            temp=temp->nxt;
            del=temp->nxt;
            i++;
        }
        int d=(del)->data;
        temp->nxt=(del)->nxt;
        free(del);
        printf("\n deleted value is %d",d);   
    }
}
void dis()
{   
    if(head==NULL)
        printf("empty");
    else
    {
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->nxt;
    }
    }
}
void search()
{
    int val,i=0;
    temp=head;
    if(temp==NULL)
    {
        printf("empty");
    }
    else
    {
    printf("enter value to be searched");
    scanf("%d",&val);
    while(temp->nxt!=NULL)
    {
        if(temp->data==val)
        {
            printf("%d is presented in the LL at pos=%d",val,i+1);
        }
        temp=temp->nxt;
        i++;
    }
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("enter your choice");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                insertatbeg();
                break;
            case 2:
                insertatend();
                break;
            case 3:
                insertatpos();
                break;
            case 4:
                dis();
                break;
            case 5:
                deleteatbeg();
                break;    
            case 6:
                deleteatend();
                break;    
            case 7:
                deleteatpos();
                break;   
            case 8:
                search();
                break; 
        }
    }
}