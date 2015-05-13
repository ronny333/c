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
else
{
fp1=fopen(argv[2],"w");
printf("FIle is present\n");
}

while((ch=fgetc(fp))!=EOF)
fputc(ch,fp1);

}
