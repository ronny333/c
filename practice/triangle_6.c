#include<stdio.h>
main()
{
int b,i,j,k;
for(i=0;i<=4;i++)
{
for(k=0;k<=i;k++)

printf(" ");

for(j=4;j>=i;j--)

printf("%d",j);

printf("\n");
}

}
