//NOTE:In this compiler i,j,k store besides each other..
#include<stdio.h>
main()
{
int i=10,j=20,k=30;
int *p[3];
p[0]=&i;
p[1]=&j;
p[2]=&k;
printf("p=%u\n",p);
printf("&i=%u\n",&i);
printf("&j=%u\n",&j);
printf("&p=%u\n",&p);
printf("p[0]=%u\n",&p[0]);
printf("*p[1]=%u\n",*p[1]);
printf("*p[0]=%u is at address *p=%u\n",*p[0],*p);
printf("**p=%u\n",**p);
printf("p[0][0]=%u\n",p[0][0]);
printf("p[0][1]=%u\n",p[0][1]);
printf("p[0][2]=%u\n",p[0][2]);

}
