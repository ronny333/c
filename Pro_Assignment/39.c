#include<stdio.h>
main()
{
int i,sum=0,r,j;
for(i=10;i<10000;i++)
{
sum=0;
j=i;
while(j>0)
{
r=j%10;
sum=sum*10+r;
j=j/10;
}
if(i==sum)	
printf("num=%d\t",i);
}
}
