//without using structure
#include<stdio.h>
main()
{
int roll[5],i,tmp,j,sel,m1;
char name[5][20],*p,*q;
float marks[5];
p=name;
for(i=0;i<5;i++)
	{
	printf("Enter name:");
 	scanf("%s",name[i]);
	printf("Enter roll no:");
	scanf(" %d",&roll[i]);

	printf("Enter marks:");
	scanf(" %f",&marks[i]);
	}
//for(i=0;i<5;i++)
//printf("%d %s %f\n",roll[i],name[i],marks[i]);
printf("select shorting type:");
printf("1)As Roll no:\n2)As marks\n3)As name\n");
scanf("%d",&sel);

printf("Now...new result is\n");
switch(sel)
{
case 1:
for(j=0;j<4;j++)
{
	for(i=0;i<5;i++)
	{
		if(roll[i]>roll[i+1])
		{
		tmp=roll[i+1];m1=marks[i+1];
		q=p[i];
		roll[i+1]=roll[i];marks[i+1]=marks[i];
		p[i+1]=p[i];
		roll[i]=tmp;marks[i]=m1;
		p[i]=q;
		}

	}
}

for(i=0;i<5;i++)
printf("%d %s %f\n",roll[i],name[i],marks[i]);
break;

case 2:
for(j=0;j<4;j++)
{
	for(i=0;i<5;i++)
	{
		if(marks[i]>marks[i+1])
		{
		tmp=marks[i+1];
		marks[i+1]=marks[i];
		marks[i]=tmp;
		}

	}
}
for(i=0;i<5;i++)
printf("%d %s %f\n",roll[i],name[i],marks[i]);
break;

//case 3:



}
}
