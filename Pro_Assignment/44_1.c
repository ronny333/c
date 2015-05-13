#include<stdio.h>
main()
{
int units,bill=0,bill1=0,u1;
printf("power consumed in units..:");
scanf("%d",&units);



if(units<600)
{
bill=(units-400)*0.8+230;
units=units-200;
}
else if(units<400)	
{

bill=bill+units*0.65+100;
units=units-200;
}	

else if(units<200)
{	bill=bill+units*0.5;
	
}

printf("%d\n",bill);
}
