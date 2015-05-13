#include<stdio.h>
main()
{
int i,n,t1=1,t2=0,t3;

while(t3<100)
	{
	t3=t1+t2;
	t1=t2;
	t2=t3;
	if(t3<100)
	printf("%d ",t3);
	}	
}
