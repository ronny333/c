#include<stdio.h>
main()
{
int i,j;

for(i=0;i<=4;i++)
	{
	for(j=4;j>=0;j--)
	{
	if(j>i)
	printf(" *");
	else
	printf(" ");
	}
printf("\n");
	}

for(i=4;i>0;i--)
	{
	for(j=0;j<=4;j++)
	{
	if(j<i)
	printf(" ");
	else
	printf(" *");
	}
printf("\n");
	}



}
