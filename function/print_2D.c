#include<stdio.h>
void print_2D(int *,int,int);
main()
{
int i,r,c;
int a[2][3]={{10,20,30},
	      {40,50,60}};
r=sizeof(a)/sizeof(a[0]);
c=sizeof(a[0])/sizeof(a[0][0]);
print_2D(a,r,c);

}
/*void print_2D(int *p,int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",*p++);
printf("\n");
}
*/

void print_2D(int *p,int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",*(p+i*c+j));
printf("\n");
}
}
/*
void print_2D(int p[][3],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	printf("%d ",p[i][j]);
printf("\n");
}

}
*/




