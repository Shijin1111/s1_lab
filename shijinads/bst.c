#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root, *temp;
struct node *addnode()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to new node: ");
    scanf("%d", &new->data);
    new->left = NULL;
    new->right = NULL;
    return new;
}
struct node *insert(struct node *root,struct node *new)
{
    if(root==NULL)
    {
        return new;
    }
    else if(new->data>root->data)
    {
        root->right=insert(root->right,new);
    }
    else if(new->data<root->data)
    {
        root->left=insert(root->left,new);
    }
    return root;
}
struct node *inordersuccessor(struct node *node)
{
    while (node && node->left!=NULL)
    {
        node=node->left;
    }
    return node;
}
struct node *delete(struct node *root,int val)
{
    if(root==NULL)
    {
        return root;
    }
    if(val>root->data)
    {
        root->right=delete(root->right,val);
    }
    else if (val < root->data)
    {
        root->left = delete (root->left, val);
    }
    else
    {
        if(root->left==NULL)
        {
            temp=root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }
        temp=inordersuccessor(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
}