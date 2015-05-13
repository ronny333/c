#include<stdio.h>
#include<stdlib.h>
int my_strcmp(char s[],char t[])
{
int i=0;
for(i=0;s[i]==t[i];i++)
{
if(s[i]=='\0')
return 0;
}
printf("%d\n",s[i]-t[i]);
return (s[i]-t[i]);
}




main()
{
char s[]="add",t[]="maa";
int i;
i=my_strcmp(s,t);
if(i==0)
printf("strings are same\n");
else if(i<0)
printf("second string is higher..\n");
else
printf("first string is higher..\n");
}
