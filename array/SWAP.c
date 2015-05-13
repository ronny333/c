#include<stdio.h>
main()
{
int a[5];
int i,j,temp;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0,j=4;i<j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;

}

for(j=0;j<5;j++)
printf("a[%d]=%d\n",j,a[j]);

}
