#include<stdio.h>
main()
{
int a[2][3],b[3][3],c[2][3];
int i,j,k,sum;
for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	}

for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	scanf("%d",&b[i][j]);
	}

for(i=0;i<2;i++)
{	
	for(k=0;k<3;k++)
	{
	sum=0;
	for(j=0;j<3;j++)
	{
	sum+=(a[i][j]) * (b[j][i]);
	}
	c[i][k]=sum;
	}
}
for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
	printf("%d ",c[i][j]);
	}
}
