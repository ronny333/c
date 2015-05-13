#include<stdio.h>
main()
{
FILE *fp;
fp=fopen("temp11.c","r+");
if(fp==NULL)
{
printf("File not present....\n");
return;
}

char find[20];
char *p,ch;

int c=0,line=0;
while((ch=fgetc(fp))!=EOF)
{


c++;

}rewind(fp);
p=malloc(c);
while(fgets(p,c,fp))
{
++line;
if(strstr(p,"hello"))
printf("%s and line number is %d\n",p,line);
}

}
