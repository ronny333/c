#include<stdio.h>
main()
{
int i,j,c=0,k;
char m[20],s[20];
printf("enter main string:");
scanf("%s",m);
printf("enter sub string:");
scanf("%s",s);
//for(k=0;s[k];k++);
 for(i=0;m[i];i++)
{
if(m[i]==s[0])
for(j=1;s[j];j++)
{
if (s[j]!=m[i+j])
	{
	break;	
	}
}
}
if(s[j]=='\0')
{printf("String is present\n");
++c;

printf("c=%d\n",c);
}
else
printf("Not present\n");
}
