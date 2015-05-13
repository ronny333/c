#include<stdio.h>
main()
{
int i,a[7],j,tmp;
for(i=0;i<6;i++)
scanf("%d",&a[i]);

for(i=0;i<6;i++)
printf("%d\t",a[i]);
printf("\n");
for(j=6;j>0;j--)
{
for(i=0;i<5;i++)
	{
	
	if(a[i]>a[i+1])
	{
	tmp=a[i];
	a[i]=a[i+1];
	a[i+1]=tmp;
	}
	}	
}
printf("Now.....");
for(i=0;i<6;i++)
printf("%d\t",a[i]);
}
