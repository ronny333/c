#include<stdio.h>
main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},i,x=10,tmp;
for(i=0;i<10;i++)//in place of 10 if we write i<5 than value exchange
{		//ans is:10,9,8,7,6,5,4,3,2,1
tmp=a[i];
a[i]=a[x-i-1];
a[x-i-1]=tmp;
}

for(i=0;i<x;i++)
printf("%d\n",a[i]);
}
//Here 2 times exchange  occurs so ans is :1 2 3 4 5 6 7 8 9 10

