//CAT command implementation
#include<stdio.h>
main(int argc,char **argv)
{
FILE *fp;
char ch;
if(argc!=2)
printf("Usage:./a.out filename\n");

fp=fopen(argv[1],"r");

if(fp==NULL)
printf("File is not present\n");
else
printf("File is present\n");

while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
}
