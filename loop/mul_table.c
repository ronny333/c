#include<stdio.h>
main()
{
int i,j,n;
printf("N=");
scanf("%d",&n);
for(i=1;i<=10;i++)
	{
	for(j=1;j<=n;j++)
	{
	printf("%d*%d=%d\t",i,j,(i*j));
	}
	printf("\n");
	}
}
