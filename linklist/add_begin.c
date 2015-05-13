#include<stdio.h>
#include<stdlib.h>
struct st
{
int roll;
char name[10];
float marks;
struct st *next;

};
void add_begin(struct st **);
void print(struct st *);

main()
{
struct st *headptr=0;
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
print(headptr);
}
//struct st *tmp1;
void add_begin(struct st **ptr)
{
struct st *tmp;
tmp=malloc(sizeof(struct st));
printf("Enter roll no..name..marks:");
scanf("%d %s %f",&(tmp->roll),(tmp->name),&(tmp->marks));

tmp->next=*ptr;
*ptr=tmp;
}
void print(struct st *ptr)
{
while(ptr)
{
printf("%d %s %f\n",(ptr)->roll,(ptr)->name,(ptr)->marks);

ptr=ptr->next;

}

}
