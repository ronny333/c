#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
int i=0,c=0;
char *p;
fp=fopen(argv[1],"r");
if(argc!=3)
{
printf("usage..");
return;

}

while(fgetc(fp)!=EOF)
c++;
rewind(fp);
p=malloc(c+1);

while(fgets(p,c,fp))
{
if(strstr(p,argv[2]))
printf("%s",p);
}

}
