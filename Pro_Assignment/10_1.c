//Find largest and smallest number from given array and its index number also
#include<stdio.h>
main()
{
int a[11],i,s,b,si,bi;
printf("Enter the values:");
for(i=0;i<11;i++)
scanf("%d",&a[i]);

s=a[0];
b=a[0];
for(i=1;i<11;i++)
	{
	if(a[i]>b)
	{b=a[i];bi=i;
	}
	if(a[i]<s)
	{s=a[i];
	si=i;}
	}
printf("%d is higest value at index %d and %d is smallest value at %d\n",b,bi,s,si);
}
