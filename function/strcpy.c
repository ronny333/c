#include<stdio.h>
void strcpy1(char *,char *);
main()
{
char s[20],d[20];
printf("Enter the sourse string:");
gets(s);
strcpy1(s,d);
printf("Destination string is %s\n",d);
}
void strcpy1(char *ss,char *dd)
{
int i;
for(i=0;ss[i];i++)
dd[i]=ss[i];

dd[i]='\0';
}
