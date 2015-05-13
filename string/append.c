#include<stdio.h>
main()
{
int i,j=0;
char a[20],b[20],c[20],d[30];
printf("Enter 1st string:");
gets(a);
printf("Enter 2nd string:");
gets(b);
printf("Enter 3rd string:");
gets(c);
puts(a);
puts(b);
puts(c);
for(j=0;a[j];j++)
{
	for(i=0;a[i]!=' ';i++)
	{
	b[i]=a[i];
	}
	j=i+1;
}
b[j]='\0';
puts(b);
}

