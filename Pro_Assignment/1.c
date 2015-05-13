#include<stdio.h>
main()
{
int a,b,c;
printf("Enter three nums:");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
	{
	if(a>c)
	printf("%d is max\n",a);
	else
	{
	printf("%d is max\n",c);
	printf("%d is min\n",b);
	}}
else	
{
	if(b>c)
	printf("%d is max\n",b);
	else
	{
	printf("%d is max\n",c);
	printf("%d is min..\n",a);
}}
if((c<a)&&(c<b))
printf("%d is min..\n",c);
}
