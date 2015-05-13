//.............Decimal to Octal...........//
#include<stdio.h>
main()
{
int num,d,sum=0,i=1;
printf("Enter the  num:");
scanf("%d",&num);
/*while(num>0)
	{
	d=num%8;
	d=d*i;
	sum=sum+d;
	i=i*10;
	num=num/8;
	}
*/
//--------Decimal to Hexadecimal---------//
while(num>0)
	{
	d=num%16;
	if((d>9)&&(d<16))
	{
	d='A'+d-10;
	printf("%c",d);
	}
	else{
	printf("%d",d);
	}
	num=num/16;
	}
}
