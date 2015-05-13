//INCOMPLETE
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
char ch,*p;
int i=0,c=0;
FILE *fp;
//Check valid syntax
if(argc!=2)
{
printf("Usage: ./a.out filename");
return;
}
fp=fopen(argv[1],"r+");
//check that file is present or not
if(fp==NULL)
{
printf("FIle not present\n");
return;
}

//Finding size of file
while(fgetc(fp)!=EOF)
c++;
printf("Size of file is %d\n",c);
rewind(fp);//move fp at initial position
p=malloc(c+1);//Define size +1 because null at end
//Copy contant of file into p
while((ch=getc(fp))!=EOF)
	{
	p[i++]=ch;
	}
	p[i]='\0';
printf("%s\n",p);


for(i=0;p[i];i++)
{
	if(strstr(p,"#define"))
	{
	printf("11111 ");
	i=i+7;

	
	}

}

}
