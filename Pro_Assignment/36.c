#include<stdio.h>
int strcmp1(char *,char *);
main()
{
int r;
char a[20],b[20];
printf("Enter 1st string:");
gets(a);
printf("Enter second string:");
gets(b);
r=strcmp1(a,b);
printf("%d\n",r);
if(r==0)
printf("Strings are same..\n");
else
printf("Strings are not same..\n");
}
int strcmp1(char *p,char *q)
{

	while((*p-*q)==0)
	return 0;
while((*p-*q)>0)
return 1;

while((*p-*q)<0)
return -1;



}
