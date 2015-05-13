//Decimal to binary using array and arithmatic opration
#include<stdio.h>
main()
{
int num,a[15],i,j;
printf("Enter  the number:");
scanf("%d",&num);
i=0;
while(num>0)
{
a[i]=num%2;

i++;
num=num/2;
}
printf("Binary number is:");

for(j=i-1;j>=0;j--)
{
printf("%d",a[j]);


}
printf("\n");
}
