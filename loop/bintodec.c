#include<stdio.h>
main()
{
int n,nsave,r,d,j=1,dec=0;
printf("enter the num:");
scanf("%d",&n);
nsave=n;
while(n>0)
{
r=n%10;
d=r*j;
dec+=d;
j*=2;
n/=10;
}
printf("Binary num is %d and decimal equ is %d",nsave,dec);


}
