//if 12th bit is set then reset 2nd bit and if 12th bit is reset then set 2nd bit
#include<stdio.h>
main()
{
short int num;
int bit;
printf("Enter number:");
scanf("%d",&num);


if(num&1<<12)
num=num&(~(1<<2));  
else
num=num|(1<<2);

printf("Updated number is %d",num);
}
