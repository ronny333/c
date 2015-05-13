#include<stdio.h>
#include<stdarg.h>
main(int argc,char **argv,...)
{
char ch;
int i,n,j;
FILE *fp,**fp1;
va_list p;
va_start(p,argv);
for(j=0;j<argc;j++);
printf("%d\n",j);

fp=fopen(argv[1],"r");
for(i=2;i<argc;i++)
fp1[i]=fopen(argv[i],"w");
//fp=fopen(var_arg(p,int),"w");
for(i=2;i<argc;i++)
{

fp1[i]=fopen(argv[i],"w");
while((ch=fgetc(fp))!=EOF)
	{
	fputc(ch,fp1[i]);
	}
}

}
