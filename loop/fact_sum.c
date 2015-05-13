#include<stdio.h>
main()
{
int n,i,j,fact=1;
float sum=0;
printf("Enter Nuber : ");
scanf("%d",&n);

for(i=n;i>0;i--)
{
fact=1;
for(j=i;j>0;j--)
{
fact=fact*j;
}
sum=sum+1.0/fact;
}
printf("Sum=%f\n",sum);
}
