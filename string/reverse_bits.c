#include<stdio.h>
int reverse_bits(int *);
int print_bits(int);
main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
print_bits(num);
printf("\n");
reverse_bits(&num);
printf("\n");
print_bits(num);
printf("\n");
printf("Destination number is %d\n",num);
}
int print_bits(int n)
{
int i;
for(i=31;i>=0;i--)
if(n&1<<i)
printf("1");
else
printf("0");
return;
}
int reverse_bits(int *n1)
{
int i,j;
for(i=0,j=31;i<j;i++,j--)
if((*n1&1<<i)!=(*n1&1<<j))
{*n1=*n1^(1<<i);
*n1=*n1^(1<<j);
}
return;
}
