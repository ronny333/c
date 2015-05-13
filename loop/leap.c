#include<stdio.h>
main()
{
int i,yr;
printf("Enter the year:");
//for(i=0;i<2000;i++)
//scanf("%d",&i);
for(i=0;i<200;i++)
{
if(i%100==0)
{
if (i%400==0)
printf("leap  yr is %d\n",i);
//else
//printf("%d is Not leap yr\n",i);
}
else
{
if(i%4==0)
printf("%d is Leap yr\n",i);
//else
//printf("%dis Not a leap  yr\n",i);
}
}

}
