//.... strchr function...
#include<stdio.h>
void strstr1(char *,char *);
main()
{
char s[20],d[20];
printf("Enter the sourse string:");
gets(s);
printf("Enter the destination string:");
gets(d);
strstr1(d,s);

}
void strstr1(char *p,char *q)
{
int i,j;
for(i=0;q[i];i++)
{
	if(p[0]==q[i])
	{
		for(j=1;p[j];j++)
		{
		if(p[j]!=q[i+j])
		{
		break;
		}
		}
	}

}

if(p[j]=='\0')
printf("Destination string is present\n");
else
printf("Destination string is not present\n");
}
