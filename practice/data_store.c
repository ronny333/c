#include<stdio.h>
main()
{
unsigned int r=3,pos;
//int pos;
//printf("%u \n",r);
for(pos=31;pos>=0;pos--)
	if(r&1<<pos)
	printf("1");
	else
	printf("0");

//printf("%d\n",sizeof(r));
/*if(printf("hi..\n"))
printf("byeeee...\n");
else
printf("gbbbb");	
*/
//int i=2,j=3,temp;
//j=(i+j)-(i=j);
//printf("%d %d",i,j);
}
