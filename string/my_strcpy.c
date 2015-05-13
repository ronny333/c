#include<stdio.h>
void my_strcpy(char [],char []);
main()
{
char s[20],d[20];
printf("Sourse string is:");
scanf("%s",s);
my_strcpy(d,s);
printf("Destination string is %s\n",d);
}

void my_strcpy(char c[],char r[])
{
int i;
for(i=0;r[i];i++)
c[i]=r[i];
c[i]='\0';
}
