//Append contant of one file to another file
#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
int c=0,i=0;
char *p,ch;
FILE *fp,*fp1;
if(argc!=3)
{
printf("Usage: ./a.out source_file dest_file\n");
return;
}
fp=fopen(argv[1],"r");
fp1=fopen(argv[2],"a");

while(fgetc(fp)!=EOF)
{
c++;
}
printf("Size of source file is %d\n",c);
p=malloc(c+1);
rewind(fp);

while((ch=fgetc(fp))!=EOF)
{
p[i++]=ch;
}
p[i]='\0';
printf("%s\n",p);

for(i=0;p[i];i++)
{
fprintf(fp1,"%c",p[i]);

}


}



