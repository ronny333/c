#include<stdio.h>
main()
{
int num,n,sum=0;
printf("Enter num:");
scanf("%d",&num);
n=num;

while(n>0)
{
sum=sum*10+(n%10);
n/=10;

}
if(sum==num)
printf("Pallindrom number...\n");
else
printf("Not pallindrom...\n");


}
