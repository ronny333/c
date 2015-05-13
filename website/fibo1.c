#include<stdio.h>
main()
{
int n,c;
printf("num:");
scanf("%d",&n);
int first=0,second=1,next=0;
for(c=0;c<n;c++)
{
if(c==1)
next=1;
else
{
next=first+second;
first=second;
second=next;


}
printf("%d",next);


}



}
