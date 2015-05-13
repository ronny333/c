#include<stdio.h>
#include<string.h>
main()
{
int i;
char s[20],ch;
printf("enter the string:");
scanf("%s",s);
printf("Enterthe char:");
scanf(" %c",&ch);

strchr(s,ch);
printf("Now string is:%s",s);

}
