#include<stdio.h>
int sum(int,int);
main()
{
int r,i,j;
int (*p)(int,int);
p=sum;
printf("%d\n",p(i,j));
}
int sum(int x,int y)
{
int z;
 x=5,y=7;
z=x+y;
return z;
}
