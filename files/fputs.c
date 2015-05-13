#include<stdio.h>
main()
{
FILE *fp;
char str[80];
fp=fopen("test.c","w");
printf("Enter text:");
printf("To stop editing press ctrl+d or ctrl+z:\n");
while(gets(str)!=NULL)
fputs(str,fp);
fclose(fp);
}
