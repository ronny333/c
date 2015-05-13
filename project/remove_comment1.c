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
//int i=0;
	if((p[i]=='/')&&(p[i+1]=='*'))
	{
//	j=i+2;

		while(!((p[i]=='*')&&(p[i+1]=='/')))
		{
		i++;
		}
	
		i=i+2;	
		
		//printf("%c",p[i]);
		
	//i=j;
	//break;
	//i++;
	}
	
//abc:

printf("%c",p[i]);
}
}
	




