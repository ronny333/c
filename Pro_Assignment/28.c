#include<stdio.h>
int my_strcmp(char *,char *);
main()
{
int res;
char a[10],b[10];
printf("Enter 1st string:");
gets(a);
printf("Enter 2nd string:");
gets(b);
res=my_strcmp(a,b);
printf("%d\n",res);
}


int my_strcmp(char *p,char *q)
{
int i,j;
for(i=0;p[i];i++);
for(j=0;q[j];j++);
if(i==j)
	{
	for(i=0;p[i];i++)
		{
		if(p[i]!=q[i])
		break;
		}
	}
else
return 0;
if(p[i]=='\0')
return 1;
else
return 0;
}
