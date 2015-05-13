#include<stdio.h>
#define N 4
struct cri
{
char name[10];
int age;
int match[5];
float avg;

};
void avg(struct cri []);
void sort(struct cri []);
void display(struct cri);
main()
{
float f;
int i,j;
struct cri P[N],tmp;
for(i=0;i<N;i++)
	{
	printf("Enter name:");
	scanf(" %s",P[i].name);
	
	printf("Enter age:");
	scanf(" %d",&P[i].age);

	printf("Enter runs in 5 matches");
	for(j=0;j<5;j++)
	scanf(" %d",&P[i].match[j]);

	}
avg(P);

sort(P);
for(i=0;i<N;i++)
display(P[i]);

}

void avg(struct cri a[])
{
int i,j;

for(i=0;i<N;i++)
{
 a[i].avg=0;
for(j=0;j<5;j++)
a[i].avg+=a[i].match[j];
a[i].avg=a[i].avg/5;
}
}

void sort(struct cri a[])
{
int i,j;
struct cri tmp;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		if(a[i].avg>a[j].avg)
		{
		tmp=a[j];
		a[j]=a[i];
		a[i]=tmp;
		}	

	}
}
void display(struct cri p)
{
printf("name=%s age=%d avg=%f\n",p.name,p.age,p.avg);



}
