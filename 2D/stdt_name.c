#include<stdio.h>
main()
{
char a[4][5];
int i;
printf("Enter the names:");
for(i=0;i<4;i++)
scanf("%s",a[i]);

for(i=0;i<4;i++)
printf("%d->%s\n",i,a[i]);
}
