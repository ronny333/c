//Print the  digit from number
#include<stdio.h>
main()
{
int i,num,d,dig;
printf("Enter the number:");
scanf("%d",&num);
printf("Enter digit u want to show(from last):");
scanf("%d",&dig);
	for(i=0;i<dig;i++)
	{
	
//	d=num%10;
	d=num%10;
	num=num/10;
	}
	printf("%d\n",d);

	}


