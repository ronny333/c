#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
int c=0;
char *p;
if(argc!=3)
	{
	printf("Usage:./a.out filename string\n");
	return;
	}
fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("Not present\n");
		return;
	}
while(fgetc(fp)!=EOF)
c++;
rewind(fp);
p=malloc(c);
	while(fgets(p,c,fp))
	{
		if(strstr(p,argv[2]))
		printf("%s",p);
	}

}
