#include<stdio.h>
#include<stdlib.h>
main()
{
char ch,*p;
int i=0,n,j;
FILE *fp;
fp=fopen("data.c","r+");
if(fp==NULL)
{
printf("FIle not present\n");
return;
}
p=malloc(80);
while((ch=getc(fp))!=EOF)
	{
	p[i++]=ch;
	}
	p[i]='\0';
printf("%s\n",p);

for(i=0;p[i];i++)
{
	if((p[i]=='/')&&(p[i+1]=='/'))
	{
	while(p[i]!='\n')
	{
	i++;
	}

	}
printf("%c",p[i]);
}
rewind(fp);
fp=fopen("data.c","w+");
//fwrite(p,81,1,fp);
for(i=0;p[i];i++)
{

fprintf(fp,"%c",p[i]);

}


fclose(fp);
}
