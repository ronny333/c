#include<stdio.h>

void strlwr1(char *);
main()
{
char a[20];
printf("Enter the string:");
gets(a);
strlwr1(a);
printf("Now string is %s\n",a);

}
void strlwr1(char *p)
{
int i;
	for(i=0;p[i];i++)
	{
	if((p[i]>=65)&&(p[i])<=90)
	{
	p[i]=p[i]+32;
	}
	}

}
