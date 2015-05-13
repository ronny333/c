#include<stdio.h>
main()
{
int num,r,dig,sum=0;
printf("Enter the number:");
scanf("%d",&num);
//SUM OF DIGITS
/*while(num>0)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("Sum of digit is %d\n",sum);
*/

//SUM OF DIGIT UNTIL ONLY 1 DIGIT COME
do
{
for(sum=0;num!=0;num/=10)
	{
	dig=num%10;
	sum=sum+dig;
	}
printf("%d\t",sum);
num=sum;
}while(num/10!=0);

printf("\n");
}
