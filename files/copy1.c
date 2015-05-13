#include<stdio.h>
main(int argc,char **argv)
{
char ch;
FILE *fp,*fp1;


fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("File not present\n");
return;
}


fp1=fopen(argv[2],"r+");


if(fp1!=0)
{
printf("File is  already present\ngive another name\n");
return;
}
else
{
fp1=fopen(argv[2],"w");
while((ch=fgetc(fp))!=EOF)
fputc(ch,fp1);
}

}


