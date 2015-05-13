#include<stdio.h>
#define R 2
#define C 3

main()
{
int i,j,a[R][C],tmp,row,col;
printf("Enter elements:\n");
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
	scanf("%d",&a[i][j]);
	}
}

for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
}
//printf("Enter row number want to sort..\n");
//scanf(" %d",&row);
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
		if(a[i][j]>a[i][j+1])
		{
		tmp=a[i][j+1];
		a[i][j+1]=a[i][j];
		a[i][j]=tmp;
		}
	}
}
printf("Sorted element are:\n");
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
}

}
