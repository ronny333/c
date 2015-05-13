//Sum of digit...
#include<stdio.h>
main()
{
int num,sum=0,r;
printf("Enter the number:");
scanf("%d",&num);
while(num>0)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("sum of digit is %d\n",sum);

}
