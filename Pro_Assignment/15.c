//x power y(x^y)...using recursion
#include<stdio.h>
int power(int,int);
main()
{
int x,y,ans,i;
printf("Enter the number:");
scanf("%d",&x);
printf("Enter the power:");
scanf("%d",&y);
ans=power(x,y);
printf("Ans is %d\n",ans);
}

int power(int x,int y)
{
int sum;
if(y==0)
return 1;
else
return (x*power(x,y-1));

} 
