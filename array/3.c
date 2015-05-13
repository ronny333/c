#include<stdio.h>
main()
{
int a[5];
int i;
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=4;i>=0;i--)
printf("a[%d]=%d\n",i,a[i]);

}
