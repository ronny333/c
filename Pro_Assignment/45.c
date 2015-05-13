//Sum of 2 numbers using Function pointer
#include<stdio.h>
int sum(int i,int j)
{
return i+j;
}

main()
{
int res;
int (*p)(int,int);
p=sum;
res=p(2,3);
printf("res=%d\n",res);
}
