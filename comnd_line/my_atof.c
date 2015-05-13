#include<stdio.h>
float my_atof(char *);
main(int argc,char **argv)
{
float i;
//char ch[]="23.5";
i=my_atof(argv[1]);
printf("argv[1]=%s i=%f\n",argv[1],i);
}

float my_atof(char *p)
{
int i,j,k=1;
float num=0,r;
for(i=0;p[i]!='.';i++)
	{
	j=p[i]-48;
	num=num*10+j;
	}
i++;
for(;p[i];i++)
{
r=p[i]-48;
num=num+r/(10*k);
k=k*10;
}
return num;
}
