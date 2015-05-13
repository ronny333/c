#include<stdio.h>
main()
{
int a[10],i,j=0,k=0,l=0,m=0,n=0;
printf("Enter 10 numbers:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]==0)
		{
		j=j+1;
		}
		else if(a[i]>0)
			{
			k=k+1;
			}
			else 
			{
			l=l+1;
			}

if(a[i]%2==0)
m++;
else
n++;
}

printf("Number of zero are %d\n",j);
printf("Number of positive numbers are %d\n",k);
printf("Number of negative numbers are %d\n",l);
printf("Number of even numbers are %d\n",m);
printf("Number of odd numbers are %d\n",n);
}
