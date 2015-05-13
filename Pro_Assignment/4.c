//Sum of odd numbers between 10 to 1000
#include<stdio.h>
main()
{
int i,sum=0;
for(i=11;i<1000;i++)
	{
	if((i%2)!=0)
	sum+=i;
	}
printf("sum is %d",sum);
}
