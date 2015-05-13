#include<stdio.h>
main()
{
int i, a[5];
for(i=0;i<5;i++)
	{
	a[i]=i;
	}
	for(i=0;i<5;i++)
	{
	a[i]=a[5-i];
	}
for(i=0;i<5;i++)
printf("%d ",a[i]);

}
