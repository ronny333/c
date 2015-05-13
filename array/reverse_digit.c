#include<stdio.h>
main()
{
int a[5];
int i,j,sum=0,r=0,num;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
sum=0;
while(a[i])
{
r=a[i]%10;
sum=(sum*10)+r;
a[i]=a[i]/10;
}
printf("a[%d]=%d\t",i,sum);
}
}
