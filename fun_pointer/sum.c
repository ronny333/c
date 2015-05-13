#include<stdio.h>
int sum(char *,...);
main()
{
int r;
r=sum("abc",10,20,30);
printf("r=%d\n",r);

}
int sum(char *q,...)
{
int i,m=0,r=0;
va_list p;
va_start(p,q);

while(1)
{
m=va_arg(q,int);
if(m==0)
break;

r=r+m;
return r;
}
}
