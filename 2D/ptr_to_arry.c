#include<stdio.h>
main()
{
int a[5]={10,20,30,40,50};
int (*p)[3];
int *ip;
int (*q)[2];

p=a;
q=a;
ip=a;

printf("%u\n",p);
printf("%u\n",*p);
printf("%u\n",*ip);//10
printf("%u\n",(*p)[0]);//10
printf("%u\n",(*p)[1]);//20
printf("%u\n",p[0][0]);//10
printf("%u\n",p[1][1]);//50
printf("%u\n",q[0][0]);//10
printf("%u\n",q[1][1]);//40
}
