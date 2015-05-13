#include<stdio.h>
main(int argc,char **argv)
{
int i,j,num=0; 
char ch[]="123";
for(i=0;ch[i];i++)
	{
	j=ch[i]-48;
	num=num*10+j;
	
	}
printf("%d\n",num);
}
