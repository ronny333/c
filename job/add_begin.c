#include"header.c"
struct st *headptr=0;
int  add_begin(struct st **ptr);
void print(struct st *p);
void save(struct st *s);
void delete_all(struct st **d);
main()
{
char ch;
abc:
	printf("Enter operation:\n1>add record_press A or a..\n2>print_press P or p\n3>Exit_press e or E\n4>Save_press s or S\n5>Delete_all_press d or D\n");
	scanf(" %c",&ch);
switch(ch)
{
case 'a':
case 'A':
	add_begin(&headptr);
	//break;
	goto abc;
//add_begin(&headptr);
case 'p':
case 'P':
	print(headptr);
	goto abc;
	//break;
case 'e':
case 'E':
	break;
case 's':
case 'S':
	save(headptr);
	goto abc;
	//break;
case 'd':
case 'D':delete_all(&headptr);
	goto abc;
	//print(headptr);	
//	break;
}
goto abc;
}

int  add_begin(struct st **ptr)
{
int r;
float m;
char n[15];
struct st *tmp,*tmp1;

tmp=malloc(sizeof(struct st));
tmp1=malloc(sizeof(struct st));
printf("Enter rollno.-name-marks:\n");
scanf("%d %s %f",&tmp->roll,tmp->name,&tmp->marks);
//printf("\n%d %s %f\n",tmp->roll,tmp->name,tmp->marks);
if(*ptr==NULL)
{
//printf("Empty list...\n");
tmp->next=*ptr;
*ptr=tmp;
return ;
}
else
{
tmp1=*ptr;
while(tmp1->next!=NULL)
tmp1=tmp1->next;
tmp->next=tmp1->next;
tmp1->next=tmp;
*ptr=tmp1;

return;
}
}


void print(struct st *p)
{
struct st tmp1;

while(p!=NULL)
{
printf("%d %s %f\n",p->roll,p->name,p->marks);
p=p->next;
}

}


void save(struct st *s)
{
FILE *fp;
fp=fopen("Student_database","w");

if(fp==NULL)
{
printf("Fp not found..\n");
return;
}

while(s)
{
fprintf(fp,"%d %s %f\n",s->roll,s->name,s->marks);
s=s->next;
}

}

void  delete_all(struct st **d)
{

struct st *tmp;
while(*d)
{
	tmp=(*d);
	*d=tmp->next;
	free(tmp);

}
*d=NULL;

}






