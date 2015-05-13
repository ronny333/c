#include<stdio.h>
int f2(int *x, int *y)
{
*x=*x+2;
*y=*y+3;
return *x+*y;
}
int f4( int x, int y, int * z)
{
x=x+y;
y=*z+3;
z=&x;
*z=y*2;
return (*z);
}

main()
{
int k=3,m=3,r=0;
printf("%d %d %d\n",k,m,r);
r=f2(&k,&m);
printf("%d %d %d\n",k,m,r);
r=f4(k,m,&r);
printf("%d %d %d\n",k,m,r);
}
