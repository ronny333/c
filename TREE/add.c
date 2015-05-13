#include<stdio.h>
#include<stdlib.h>
struct TREE
{
int n;
struct TREE *left;
struct TREE *right;

};
void add_node(struct TREE **,int);
void inorder(struct TREE *);
void preorder(struct TREE *);
void postorder(struct TREE *);
main()
{
struct TREE *headptr=0;
add_node(&headptr,50);
add_node(&headptr,35);
add_node(&headptr,25);
add_node(&headptr,75);
inorder(headptr);
printf("\n");
preorder(headptr);
printf("\n");
postorder(headptr);
printf("\n");
}
void add_node(struct TREE **ptr,int n)
{
if(*ptr==0)
{
*ptr=malloc(sizeof(struct TREE));
(*ptr)->n=n;
(*ptr)->right=NULL;
(*ptr)->left=NULL;
}
else if((*ptr)->n>n)
{
add_node(&(*ptr)->left,n);
}
else 
{
add_node(&(*ptr)->right,n);
}
}
void inorder(struct TREE *ptr)
{
if(ptr)
{
inorder(ptr->left);
printf("%d ",ptr->n);

inorder(ptr->right);
}
}

void preorder(struct TREE *ptr)
{
if(ptr)
{
printf("%d ",ptr->n);
preorder(ptr->left);

preorder(ptr->right);
}
}

void postorder(struct TREE *ptr)
{
if(ptr)
{
postorder(ptr->left);

postorder(ptr->right);
printf("%d ",ptr->n);
}
}

