#include"header.c"
void add_middle(struct poly **ptr)
{
int num,pow;
char ch;
struct poly *tmp1,*tmp2;
abc:
tmp1=malloc(sizeof(struct poly));

tmp2=malloc(sizeof(struct poly));

printf("Enter the number:");
scanf("%d",&tmp1->num);
printf("Enter pow:");
scanf("%d",&tmp1->pow);

if((*ptr==0)||((*ptr)->pow)>tmp1->pow)
{
tmp1->next=*ptr;
*ptr=tmp1;
}
else
{
tmp2=*ptr;
while(tmp2)
	{
	if((tmp2->next)==NULL)
	{
	
	tmp1->next=tmp2->next;
	tmp2->next=tmp1;
	break;


	}
	else if((tmp2->next->pow)>(tmp1->pow))
	{
	tmp1->next=tmp2->next;
	tmp2->next=tmp1;
	break;
	
	}
	tmp2=tmp2->next;
	}

}

printf("Enter another node(y/n)");
scanf(" %c",&ch);
if(ch=='y')
goto abc;
}
void add_middle2(struct poly **ptr) 
{

char ch;
struct poly *tmp1,*tmp2;

def:
tmp1=malloc(sizeof(struct poly));

tmp2=malloc(sizeof(struct poly));

printf("Enter the number:");
scanf("%d",&tmp1->num);
printf("Enter pow:");
scanf("%d",&tmp1->pow);

if((*ptr==0)||((*ptr)->pow)>tmp1->pow)
{
tmp1->next=*ptr;
*ptr=tmp1;
}
else
{
tmp2=*ptr;
while(tmp2)
	{
	if((tmp2->next)==NULL)
	{
	
	tmp1->next=tmp2->next;
	tmp2->next=tmp1;
	break;


	}
	else if((tmp2->next->pow)>(tmp1->pow))
	{
	tmp1->next=tmp2->next;
	tmp2->next=tmp1;
	break;
	
	}
	tmp2=tmp2->next;
	}

}

printf("Enter another node(y/n)");
scanf(" %c",&ch);
if(ch=='y')
goto def;



}
