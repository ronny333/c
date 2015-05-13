#include<stdio.h>
//void print_bin(int);//by  value
int print_bin(int *);//by reference
main()
{
int num;
printf("Enter the num:");
scanf("%d",&num);
printf("Binary numer is....");
//print_bin(num);//by  value
print_bin(&num);//by reference
		//here actual argument present
printf("\n");
}
//void print_bin(int n)//call by value method
int print_bin(int *n)//here is formal argument
		     //call by reference method	
{
int i;
for(i=31;i>=0;i--)
	//if(n&1<<i)//by value
	if(*n&1<<i)//by  reference
	printf("1");
	else
	printf("0");
}
