#include<stdio.h>
main()
{
int i=213;
int r=0,sum=0;

while(i)
{
r=i%10;
sum=(sum*10)+r;
i=i/10;
}

printf("%d",sum);


}
