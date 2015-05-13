#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("File not present\n");
return;
}
int l1,l2,l,i=0;
char p[10],c,*p1;
l1=strlen(argv[2]);
l2=strlen(argv[3]);
l1=l1-l2;
l2=0;
while(fscanf(fp,"%s",p)!=EOF)
{
l2++;
}

rewind(fp);
while((c=fgetc(fp))!=EOF)
{
i++;
}
p1=malloc(i+(l2*l1)+1);

rewind(fp);
while(fscanf(fp,"%s",p)!=EOF)
	{
	if(strcmp(p,argv[2])==0)
	{
	strcat(p1,argv[3]);
	strcat(p1," ");
	}
	else
	{
strcat(p1,"\n");
	strcat(p1,p);
//	strcat(p1,"\n");
	strcat(p1," ");
	}
//	strcat(p1,"\n");
	}
printf("%s",p1);
}
