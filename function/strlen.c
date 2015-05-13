#include<stdio.h>
int strlen1(char *);
main()
{

int l;
char s[20];
printf("Enter the string:");
scanf("%s",s);
l=strlen1(s);
printf("length is :%d\n",l);

}

int strlen1(char *p)
{
int i;
for(i=0;p[i];i++);
return i;

}

