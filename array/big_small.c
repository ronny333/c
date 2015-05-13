#include<stdio.h>
main()
{
int a[5];
int i,b,s,c=0,d=0;
for(i=0;i<5;i++)
scanf("%d",&a[i]);

b=a[0];
s=a[0];
for(i=0;i<5;i++)
{
if(b<a[i])
{b=a[i];
}
c=i;
//printf("b at %d\n",i);

if(s>a[i])
{s=a[i];

}
d=i;
//printf("s at %d\n",i);


}
printf("smallest nuber is %d and biggest number is %d \n",s,b);
printf("%d %d",c,d);

}
