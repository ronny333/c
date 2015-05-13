#include<stdio.h>
main()
{
int i,l,j;
char a[20],ch;
printf("Enter the string...");
scanf("%s",a);
for(l=0;a[l];l++);
printf("%d\n",l);
for(i=l-1;i>=0;i--)
	{	
	ch=a[l-1];
	{
	for(j=l-1;j>0;j--)
	a[j]=a[j-1];
	}
	a[0]=ch;
	printf("a=%s\n",a);
	}

}

