#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt,*pre;
};
struct node *head,*temp,*prev;
void insertatbeg()
{
    int val;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory allocation failed");
    }
    else
    {
        printf("enter the value to be inserted");
        scanf("%d",&val);
        if(head==NULL)
        {
            new->data=val;
            new->nxt=NULL;
            new->pre=head;
            head=new;
        }
        else
        {
            new->data=val;
            new->nxt=head;
            new->pre=NULL;
            head->pre=new;
            head=new;
        }

    }
}
void insertatend()
{
    int val;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory allocation failed");
    }
    else
    {
        printf("enter the value to be inserted");
        scanf("%d",&val);
        new->data=val;
        if(head==NULL)
        {
            new->nxt=NULL;
            new->pre=head;
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
            new->pre=temp;
            new->nxt=NULL;
        }
    }
}
void insertatpos()
{
    int val,pos;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory allocation failed");
    }
    else
    {
        printf("enter the position to be inserted");
        scanf("%d",&pos);
        printf("enter the value to be inserted");
        scanf("%d",&val);
        temp=head;
        for(int i=2;i<pos;i++)
        {
            temp=temp->nxt;
        }
        new->pre=temp;
        new->data=val;
        new->nxt=temp->nxt;
        temp->nxt=new;
        if(temp->nxt!=NULL)
        {
            (temp->nxt)->pre=new;
        }
    }
}
void deleteatbeg()
{
    int d;
    if(head==NULL)
    {
        printf("LL is empty");
    }
    else
    {
        temp=head;
        d=temp->data;
        printf("deletedd element is %d",d);
        head=head->nxt;
        head->pre=NULL;
        free(temp);
    }
}
void deleteatend()
{
    int d;
    if(head==NULL)
    {
        printf("LL is empty");
    }
    else
    {
        temp=head;
        while(temp->nxt!=NULL)
        {
            prev=temp;
            temp=temp->nxt;
        }
        d=temp->data;
        prev->nxt=NULL;
        free(temp);
        printf("deleted element is %d",d);
    }
}
void deleteatpos()
{
    int d,pos;
    if(head==NULL)
    {
        printf("LL is empty");
    }
    else
    {
        int i=2;
        printf("enter the position to be deleted");
        scanf("%d",&pos);
        temp=head;
        for(int i=1;i<pos;i++)
        {
            prev=temp;
            temp=temp->nxt;
        }
        d=temp->data;
        prev->nxt=temp->nxt;   
        (temp->nxt)->pre=prev; 
        free(temp);
        printf("deleted element is %d",d);
    }
}
void dis()
{
    if(head==NULL)
    {
        printf("LL is empty");
    }
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
        }
    }
}