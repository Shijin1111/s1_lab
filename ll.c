#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *nxt;
};
struct node *head;
void insertatbeg()
{
	struct node *newnode;
	int data;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("overfllow");
	}
	else{
		printf("enter the value");
		scanf("%d",&data);
		newnode->data=data;
		newnode->nxt=head; 
		head=newnode;
	}
}

void inseratlast()
{
	struct node *newnode,*temp;
	int data;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("overfllow");
	}
	else{
		printf("enter the value");
		scanf("%d",&data);
		newnode->data=data;
		if(head=NULL)
		{
			newnode->nxt=NULL;
			head=newnode;
		}
		else
		{
			temp=head;
			while (temp->data!=NULL)
			{
				temp=temp->nxt;
			}
			temp->nxt=newnode;
			newnode->nxt=NULL;
		}
	}
}

void insertatloc()
{
	int i,loc,data;
	struct node *newnode,*temp;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("overfllow");
	}
	else
	{
		printf("enter the value");
		scanf("%d",&data);
		newnode->data=data;
		printf("enter the location at which data should be inserted");
		scanf("%d",&loc);
		temp=head;
		newnode->data=data;
		newnode->nxt=NULL;
		i=1;
		while(i<loc-1)
		{
			temp=temp->nxt;
			i++;
		}
		newnode->nxt=temp->nxt;
		temp->nxt=newnode;
	}
	
}

void deleteatbeg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		temp=head;
		
	}
}

int main()
{
