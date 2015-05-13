#include<stdio.h>
main()
{
char a[20],tmp;
printf("enter data:");
scanf("%s",a);
int i,j,k;
int len=strlen(a)-1;
for(i=0;i<=len;i++)
{
tmp=a[len];
	for(k=len;k>=0;k--)
	a[k]=a[k-1];
a[k]=tmp;	
printf("%s\n",a);
}
}
