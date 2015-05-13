#include<stdio.h>
main()
{
int i,l;
char s[20],ch;
printf("Enter the string:");
gets(s);
for(l=0;s[l];l++);
for(i=0;s[i];i++,l--)
	{
	if(i<l)
	{
	ch=s[l-1];	
	s[l-1]=s[i];
	s[i]=ch;
	}
	}
printf("Now string is ");
puts(s);
}
