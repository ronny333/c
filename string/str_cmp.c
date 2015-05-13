#include<stdio.h>
main()
{
int i,ls,ld;
char s[20],d[20];
printf("Source string is:");
gets(s);
printf("Destiation string is:");
gets(d);
for(ls=0;s[ls];ls++);
for(ld=0;d[ld];ld++);

if(ls==ld)
{
	for(i=0;s[i];i++)
		{
		if(s[i]!=d[i])
		break;
		}

if(s[i]=='\0')
printf("Strings are equal...\n");
else
printf("Strings are not equal...\n");		
}
else{
printf("Strings are not equal...\n");
}
}
