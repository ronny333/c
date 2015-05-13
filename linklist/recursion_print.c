#include<stdio.h>
#include<stdlib.h>
struct st
{
int roll;
float marks;
char name[10];
struct st *next;
};

void recr(struct st *);
void add_end(struct st **);
main()
{
struct st *headptr=0;
add_end(&headptr);
add_end(&headptr);
add_end(&headptr);
recr(headptr);

}
struct st *temp1;
void add_end(struct st **ptr)
{
struct st *temp;
temp=malloc(sizeof(struct st));
printf("Enter roll no..name..marks:");
scanf("%d %s %f",&(temp->roll),(temp->name),&(temp->marks));

if(*ptr==NULL)
{
*ptr=temp; 
temp->next=0;
temp1=*ptr;
}
else
{
temp1->next=temp;
temp1=temp;
}
}
void recr(struct st *ptr)
{

if(ptr)
{
printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);

recr(ptr->next);
}
else
return;
}
