//Passing array to function
#include<stdio.h>
void check(int num);
main()
{
int a[10],i;
printf("Enter the array element:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
check(a[i]);
}
}
void check(int num)
{
if(num%2==0)
printf(" %d Number is even..\n",num);
else
printf("%d Number is odd..\n",num);
}
