#include<stdio.h>
main()
{
int a[11],n[11],i,tmp,j;
printf("Enter values:");

for(i=0;i<11;i++)
scanf("%d",&a[i]);

for(i=0;i<11;i++)
{
printf("%d ",a[i]);
}
printf("\n");
for(i=0;i<11;i++)
{
n[i]=a[i];
}

	for(i=0;i<11;i++)
	{
		for(j=0;j<11-i;j++)
		{
		if(a[j]>a[j+1])
		{
			tmp=a[j+1];
			a[j+1]=a[j];
			a[j]=tmp;
		}
		}	
	}	

for(i=0;i<11;i++)
{
printf("%d ",a[i]);
}
}
