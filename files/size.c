#include<stdio.h>
main(int argc,char **argv)
{
int c=0;
FILE *fp;
fp=fopen(argv[1],"r");

if(argc!=2)
printf("Usage: ./a.out filename\n");

while(fp==NULL)
printf("File is not present\n");


while(fgetc(fp)!=EOF)
c++;
printf("Size of file is %d\n",c);


}
