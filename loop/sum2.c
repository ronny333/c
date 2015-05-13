#include<stdio.h>
main()
{
int i,sqr,n;
float sum=0;
printf("N=");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sqr=i*i;
sum=sum+1.0/sqr;
}
printf("sum=%f\n",sum);
}
