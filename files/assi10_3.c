//copy one word at a time from two different files,alternatevly
#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
int c=0,i=0,c1=0;
char *p,ch,*q;
FILE *fp,*fp1,*fp2;
if(argc!=4)
{
printf("Usage: ./a.out  source_file1 source_file2 dest_file\n");
return;
}
fp=fopen(argv[1],"r");
fp1=fopen(argv[2],"r");
fp2=fopen(argv[3],"w");

while(fgetc(fp)!=EOF)
{
c++;
}
printf("Size of source file is %d\n",c);
p=malloc(c+1);
rewind(fp);

while(fgetc(fp1)!=EOF)
{
c1++;
}
printf("Size of source file is %d\n",c1);
q=malloc(c1+1);
rewind(fp1);

while((ch=fgetc(fp))!=EOF)
{
p[i++]=ch;
}
p[i]='\0';
printf("%s\n",p);

while((ch=fgetc(fp1))!=EOF)
{
q[i++]=ch;
}
q[i]='\0';
printf("%s\n",q);

for(i=0,j=1;p[i],q[j];)
}



