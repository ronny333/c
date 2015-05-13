#include<stdio.h>
main()
{
int a[5],i,j,c,d=0,k=0;
printf("Enter the numbers:\n");

for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
{
c=0;//REMEMBER THIS....EVERY TIME I HAVE TO MAKE IT 0...

for(j=1;j<=a[i];j++)
	{
	if(a[i]%j==0)
	c++;
	}
if(c==2)
{d++;
printf("%d is prime\n",a[i]);
}
else 
{
k++;
printf("%d is not prime\n",a[i]);
}
}
printf("Total prime numbers are %d\n",d);
printf("Total non prime numbers are %d\n",k);
}


