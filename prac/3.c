#include<stdio.h>
int z=0;
int f(int x,int y,int *m)
{ 
int static kk=9;
x=x+2;
y=y+3;
z=z+y+1+*m;
kk=kk+x;
*m=kk;
printf("%d %d %d %d %d \n", x,y,kk,z,*m);
return x+y;
}
int main()
{
int k=3,m=5,r=0;
printf("%d %d %d %d\n",k,m,r,z);
z=f(k,m,&r);
printf("%d %d %d %d\n",k,m,r,z);
z=f(m,k,&r);
printf("%d %d %d %d",k,m,r,z);
return 0;
}
