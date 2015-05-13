#include<stdio.h>
main()
{
FILE *fp;
char ch='y';

struct emp
{
char name[20];
int roll;
float marks;

};
struct emp e;
fp=fopen("studata","w");
if(fp==NULL)
{printf("Not present\n");
return;
}

while(ch=='y')
{
	printf("enter name:");
scanf("%s %d %f",e.name,&e.roll,&e.marks);
fprintf(fp,"%s %d %f\n",e.name,e.roll,e.marks);
printf("another(y/n)");
scanf(" %c",&ch);
}


}
