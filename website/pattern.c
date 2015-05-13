#include<stdio.h>
main()
{
int i,n,c;
printf("Enter row no:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(c=1;c<=i;c++)
printf(" ");
for(c=1;c<=n-i+1;c++)
printf(" *");
printf("\n");
}
		


}
