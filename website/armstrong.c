#include<stdio.h>
main()
{
int num,n,sum=0,r;

printf("Enter the num:");
scanf("%d",&num);
n=num;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n/=10;
}
if(num==sum)
printf("Armstrong number...\n");
else
printf("Not armstrong number...\n");
}
