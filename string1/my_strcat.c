#include<stdio.h>
#include<stdlib.h>
void my_strcat(char s[],char t[])
{
int i=0,j=0;
while(s[i++]);
i=i-1;
while(t[j])
s[i++]=t[j++];
s[i]='\0';
printf("%s\n",s);
}

main()
{
char s[10]="add",t[]="maa";
int i;
my_strcat(s,t);
printf("now string is %s\n",s);
}
