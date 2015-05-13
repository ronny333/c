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
printf("Enter col number want to sort..\n");
scanf(" %d",&col);
for(i=0;i<R;i++)
{
	for(j=0;j<R-1;j++)
	{
		if(a[j][col]<a[j+1][col])
		{
		tmp=a[j][col];
		a[j][col]=a[j+1][col];
		a[j+1][col]=tmp;
		}
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

}
