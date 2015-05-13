//Reverse string
#include<stdio.h>
main()
{
int i,l;
char a[20],tmp;
printf("Enter the string:");
gets(a);
for(l=0;a[l];l++);
for(i=0;a[i];i++)
	{
	if(i<l)
	{	
	tmp=a[l-1];
	a[l-1]=a[i];
	a[i]=tmp;
	l--;
	}
	
	}	
puts(a);
}
