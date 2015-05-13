#include<stdio.h>
main()
{
int i,num,sum=0;
printf("Enter the number:");
scanf("%d",&num);
i=num;
while(num>0)
{

sum=sum+num*num;
num--;

}
printf("Sum of square of first %d term is:%d\n",i,sum);
}
