#include<stdio.h>
main()
{
int units,bill=0,bill1=0,u1;
printf("power consumed in units..:");
scanf("%d",&units);



if(units<600)
{
bill=(units-400)*0.8+230+(200)*0.65+100+0.5*200;


if(units<400)	
{
u1=units-200;
bill=u1*0.65+100+200*0.5;

	{
	if(units<200)
	bill=units*0.5;
}
}
}
printf("%d\n",bill);
}
