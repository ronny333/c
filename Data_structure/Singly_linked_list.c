/*
  Singly linked list
    - Add at begin
    - Add at end
    - Print list
    - Reverse list
*/
#include <stdio.h>
#include <stdlib.h>
#define LOG_CHECK_ERROR(__CONDITION__)			\
	do											\
	{											\
		if ((__CONDITION__)){					\
			printf("LOG_CHECK_ERROR called"); goto Exit0;}   \
	} while (0)

enum Error_Code
{
	eSuccess,
	eInvalidIndex,
	eFailed=-1,
	eInsufficientMem=-2
};
typedef struct node
{
	int data;
	struct node *next;
}Node;

void Reverse_list(Node **head)
{
	printf("Reverse linked list\n");
	Node *current=*head;
	Node *prev=NULL,*next;
	while(current)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
}

int add_end(Node **head,int data)
{
	Node *n=(Node*)malloc(sizeof(Node));
	if(!n)
	{
		printf("Unable to allocate memory!!\n");
		return eInsufficientMem;
	}
	n->data=data;
	if(!(*head))
	{
		n->next=(*head);
		*head=n;
	}
	else
	{
		Node *tmp=*head;
		while(tmp->next)
			tmp=tmp->next;
		tmp->next=n;	
	}
	return eSuccess;
}

int add_begin(Node **h,int data)
{
	Node *tmp=(Node*)malloc(sizeof(Node));
	if(!tmp)
	{
		printf("Unable to allocate memory!!\n");
		return eInsufficientMem;
	}
	tmp->data=data;
	tmp->next=(*h);
	*h=tmp;
	return eSuccess;
}
void print(Node *h)
{
	while(h!=NULL)
	{
		printf("%d ",h->data);
		h=h->next;
	}
	printf("\n");
}


int main()
{
	Node *head=NULL;
	int iRetCode=eFailed;
	
	iRetCode = add_begin(&head,11);
	LOG_CHECK_ERROR(iRetCode);
	
	iRetCode = add_begin(&head,22);
	LOG_CHECK_ERROR(iRetCode);
	
	iRetCode = add_begin(&head,33);
	LOG_CHECK_ERROR(iRetCode);

	iRetCode = add_end(&head,44);
	LOG_CHECK_ERROR(iRetCode);
	
	print(head);
	Reverse_list(&head);
	print(head);
Exit0:	
	return 0;	
}
