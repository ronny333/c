//Print 2nd and 12th bit in short int number..
#include<stdio.h>
main()
{
short int num;
int bit;
printf("Enter number:");
scanf("%d",&num);
printf("Enter bit number u want to check:");
scanf("%d",&bit);

if(num&1<<bit)//Here if u want to show 2nd bit then enter bit=2
printf("Bit is SET(1)\n");  //and for showing 12th bit...bit=12.. 
else
printf("Bit is RESET(0)\n");
}
