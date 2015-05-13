#include<stdio.h>
main()
{
int i,n,c,count=1;
printf("Enter row no:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
//count++;
for(c=1;c<=n-i;c++)
printf(" ");
for(c=1;c<=i;c++)
{
printf("%d ",count++);

}
printf("\n");
}
		


}
