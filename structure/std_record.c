#include<stdio.h>
#include<string.h>
#define N 3
struct student
{
int roll;
int marks[3];
char name[10];
int total;
char grade;
};
void display(struct student);
void calculator(struct student a[]);
void sort( struct student a[]);
main()
{
int i,j;
struct student arr[N],tmp;
for(i=0;i<N;i++)
	{
	printf("Enter name:");
	scanf("%s",arr[i].name);
	printf("Enter roll");
	scanf("%d",&arr[i].roll);
	printf("Enter 3 subject marks:");
	for(j=0;j<3;j++)
		scanf("%d",&arr[i].marks[j]);
	
	}
calculator(arr);

sort(arr);
for(i=0;i<N;i++)
display(arr[i]);
}

void calculator(struct student a[])
{
int i,j;
for(i=0;i<N;i++)
	{
	a[i].total=0;
	//printf("%d\n",a[i].total);
	for(j=0;j<3;j++)
	a[i].total+=a[i].marks[j];
		
	if(a[i].total>500)
	a[i].grade='A';
	else if(a[i].total>400)
	a[i].grade='B';
	else if(a[i].total>250)
	a[i].grade='C';
	else
	a[i].grade='D';
	}
}
void sort(struct student a[])
{
int i,j;
struct student tmp;
for(i=0;i<N-1;i++)
{
	for(j=i+1;j<N;j++)
		if(a[i].total<a[j].total)
		{
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		}
}
}
void display(struct student st)
{
printf("Roll no:%d name=%s total=%d grade=%c\n ",st.roll,st.name,st.total,st.grade);


}








