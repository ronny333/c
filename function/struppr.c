#include<stdio.h>

char struppr1(char *);
main()
{
char a[20];
printf("Enter the string:");
gets(a);
struppr1(a);
printf("Now string is %s\n",a);

}
char struppr1(char *p)
{
int i;
	for(i=0;p[i];i++)
	{
	if(p[i]>=97)
	{
	p[i]=p[i]-32;
	}
	}
return *p;
}
