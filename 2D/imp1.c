#include<stdio.h>
main()
{
int a[5]={1,2,3,4,5};
//int *p[3];
int (*p)[3];
p=a;
printf("%u\n",(*p)[4]);

}
