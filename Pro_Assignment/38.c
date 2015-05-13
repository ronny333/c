#include<stdio.h>
main()
{
int fact=1;
int i,num;
printf("Enter the number:");
scanf("%d",&num);
for(i=num;i>0;i--)
{
fact=fact*i;
}
printf("factorial of %d is %d\n",num,fact);
}
