#include"header.c"
struct st *tmp1;
void add_end(struct st **ptr)
{
struct st *tmp;
tmp=malloc(sizeof(struct st));
printf("Enter roll no..name..marks:");
scanf("%d %s %f",&(tmp->roll),(tmp->name),&(tmp->marks));

if(*ptr==NULL)
{
*ptr=tmp;
tmp->next=0;
tmp1=*ptr;
}
else
{
tmp1->next=tmp;
tmp1=tmp;
}
}

