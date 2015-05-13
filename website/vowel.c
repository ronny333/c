#include<stdio.h>
#include<string.h>
int check_vowel(char );
main()
{
int i=0,j=0;
char a[100],t[100];
printf("enter string:");
gets(a);
while(a[i])
{
//if(check_vowel(a[i])==0)
if((check_vowel(a[i])==0))
t[j++]=a[i];

i++;
}
t[j]='\0';
strcpy(a,t);
printf("%s\n",a);
}
int check_vowel(char s)
{
if((s>='a')&&(s<='z'))
s=s-32;
if((s=='A')||(s=='E')||(s=='O')||(s=='U')||(s=='I'))
{
return 1;
}
return 0;
}



