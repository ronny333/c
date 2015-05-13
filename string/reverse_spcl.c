#include<stdio.h>
main()
{
int i,j=0,c=0,b[5],k,l,m,n;
char a[25];
printf("Enter the string:");
gets(a);

for(k=0;a[k];k++)
{
	if(a[k]==' ')	
	{
	b[j]=k+1;
	j++;
	}
}
for(i=0;i<j;i++)
{	
printf("%d\n",b[i]);
}
printf("%d\n",i);
	for(;i>0;i--)
	{
	l=b[i-1];
	
	for(m=l;a[m]!=' ' && a[m]!='\0';m++)
		printf("%c",a[m]);	
	printf(" ");	
	}	
for(m=0;a[m]!=' ';m++)
printf("%c",a[m]);

printf("\n");
}


