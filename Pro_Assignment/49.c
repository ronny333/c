#include<stdio.h>
void swap(int *,int *);
main()
{
int n1,n2;
printf("Enter two numbers:");
scanf("%d %d",&n1,&n2);
printf("Intitially n1=%d n2=%d\n",n1,n2);
swap(&n1,&n2);
printf("Now n1=%d n2=%d\n",n1,n2);
}
void swap(int *p,int *q)
{
int tmp;
tmp=*p;
*p=*q;
*q=tmp;
}
