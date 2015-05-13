#include<stdio.h>
main()
{
int i,j;
int a[2][3];
int *p;
for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
printf("\n");	
}
p=a;
for(i=0;i<6;i++)
	{
	printf("%d ",*(p+i));
	}
printf("\n");
}
