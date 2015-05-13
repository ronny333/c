#include<stdio.h>
main()
{
int a,i,c=0;
//a=-a-a+!a;
//printf("%%%d\n",a);
printf("Enter num:");
scanf("%d",&a);
for(i=a;i>0;c++)
{
i=i/10;
}
printf("%d\n",c);
}
