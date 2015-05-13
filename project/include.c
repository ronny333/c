#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
int c=0,i=0,j=0,k=0;
char *tmp,*p,ch,in[]="#include",r[10],link[30]="/usr/include/",*s;
FILE *fp,*fp1,*fp2;
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("File not present..\n");
return;
}
while(fgetc(fp)!=EOF)
{
c++;
}
printf("Size is %d\n",c);
rewind(fp);
s=malloc(100);
tmp=malloc(100);
p=malloc(sizeof(c+1));
while((ch=fgetc(fp))!=EOF)
{
p[i++]=ch;

}
p[i]='\0';
rewind(fp);
//printf("%s\n",p);
i=0;
while(fgets(p,100,fp))
//for(i=0;p[i];i++)
{j=0;
	//while(p[i++]!='\n')
	{while(p[i]=='#')
	{
	printf("Hi..im ronil\n");
	while(in[j++]==p[i++]);
	if(j==(strlen(in)+1))
	{
		if(p[j-1]=='<')
		{printf("1111   ");
		while(p[j]!='>')
		{
		r[k++]=p[j++];
		}
		r[k]='\0';
	printf("%s\n",r);
		
		strcat(link,r);
		printf("%s\n",link);
		
/*		fp1=fopen(link,"r");
		fp2=fopen(argv[1],"a+");

		while(fgets(tmp,100,fp1))
		fputs(tmp,fp2);
		
		rewind(fp1);
		rewind(fp2);
		fp1=fopen(argv[1],"r");
		while(fgets(tmp,100,fp2))
		fputs(tmp,fp1);
*/
		}
	}
	}
	
	}



}



}
