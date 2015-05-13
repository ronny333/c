//Sum of first and last digit...
#include<stdio.h>
main()
{
static int num;
int sum=0,r;
printf("Enter the number:");
scanf("%d",&num);

r=num%10;

while(num>10)
	{
	num=num/10;	
	}
sum=num+r;
printf("sum of first and last digit is %d\n",sum);
}

