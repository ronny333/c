#include<stdio.h>
#include<stdlib.h>
struct st
{
int roll;
char name[10];
float marks;
struct st *next;

};
void add_end(struct st **);
void print(struct st *);

main()
{
struct st *headptr=0;
add_end(&headptr);
add_end(&headptr);
add_end(&headptr);
print(headptr);
}
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
void print(struct st *ptr)
{
while(ptr)
{
printf("%d %s %f\n",(ptr)->roll,(ptr)->name,(ptr)->marks);

ptr=ptr->next;

}

}
