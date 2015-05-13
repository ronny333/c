#include<stdio.h>
#include<string.h>
int check_vowel(char );
void word(char *);
main()
{
int i=0,j=0;
char a[100],t[100];
printf("enter string:");
gets(a);
while(a[i])
{
while(a[i]!=' ')
t[j++]=a[i];
word(&t);
printf("%s\n",t);
i++;
}
t[j]='\0';
strcpy(a,t);
printf("%s\n",a);
}
void word(char *temp)
{
char tt[20];
int i=0,j=0;
while(temp[i])
{
if(check_vowel(temp[i])==0)
tt[j++]=temp[i];
i++;
}
tt[j]='\0';
strcpy(temp,tt);
//return temp;
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



