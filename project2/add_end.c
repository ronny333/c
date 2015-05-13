#include"header.c"
void add_end(struct st **ptr)
{
FILE *fp;
fp=fopen("data","w");
	if(fp==NULL)
	{
	printf("File not present\n");
	return;
	}
struct st *tmp,*tmp1;
tmp=malloc(sizeof(struct st));

printf("Enter roll no..name..marks:");
scanf("%d %s %f",&(tmp->roll),tmp->name,&(tmp->marks));

if(*ptr==NULL)
{
*ptr=tmp;
tmp->next=0;
tmp1=tmp;
}
else
{
while((tmp->next)!=NULL)
tmp1=tmp1->next;

tmp->next=tmp1->next;
tmp1->next=tmp;

}



}
