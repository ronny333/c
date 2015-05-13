#include<stdio.h>
main()
{
char a[4][20];
int i,roll[5],marks[5];
printf("Enter the names:");
for(i=0;i<4;i++)
scanf("%s %d %d",a[i],&roll[i],&marks[i]);

for(i=0;i<4;i++)
printf("%d--> Name is %s Roll no is:%d Marks=%d\n",i+1,a[i],roll[i],marks[i]);
}
