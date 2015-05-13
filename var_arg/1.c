#include<stdio.h>
#include<stdarg.h>
int sum(int,int,...);
main()
{
int r,r1;
r=sum(3,4,10,20,30,50);
printf("r=%d\n",r);
//r1=sum(4,10,20,30,40);
//printf("r1=%d\n",r1);
}
int sum(int n,int l,...)
{
int i,m=0;
va_list p;
va_start(p,l);
for(i=0;i<l;i++)
{
m=m+va_arg(p,int);

}
return m;
}
