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
int count_nodes(struct st *);
main()
{
int c;
struct st *headptr=0;
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
c=count_nodes(headptr);
printf("%d\n",c);
}
void add_begin(struct st **ptr)
{
struct st *tmp;

tmp=malloc(sizeof(struct st));

printf("name..rollno..marks:");
scanf(" %s %d %f",(tmp->name),&(tmp->roll),&(tmp->marks));

tmp->next=*ptr;
*ptr=tmp;

}
int count_nodes(struct st *ptr)
{
int c=0;
while(ptr)
{c++;
ptr=ptr->next;
}
return c;
}
