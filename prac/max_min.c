#include<stdio.h>
main()
{
int max,max_2,min_2;
int a[]={2,3,1,5,6,10,0};
int min=max=a[0],i;

for(i=0;i<7;i++)
{
if(a[i]>max)
{
max_2=max;
max=a[i];
}
else
{
min_2=min;
min=a[i];
}
}
printf("max=%d max_2=%d  min=%d min_2=%d\n",max,max_2,min,min_2);
}
