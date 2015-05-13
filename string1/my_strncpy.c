#include<stdio.h>
#include<stdlib.h>
char *my_strcpy(char s[],char t[],int n)
{
	int i=0;
while((t[i]=s[i])!='\0')
{
	if(n==0)
	{
	break;
	}
n--;
i++;
}
t[i]='\0';
return t;
}

main()
{
char s[]="Ronil",*t;
t=(char*)malloc(10);
//char t[10];
int i;
t=my_strcpy(s,t,3);

printf("string is %s\n",t);
}
