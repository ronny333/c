//x power y(x^y)..without using recursion
#include<stdio.h>
main()
{
int x,y,sum=1,i;
printf("Enter the number:");
scanf("%d",&x);
printf("Enter the power:");
scanf("%d",&y);

for(i=0;i<y;i++)
{
sum=sum*x;
}
printf("Answer is %d\n",sum);
} 
