///max  in perticular coloum
#include<stdio.h>
int maximum(int a[][3],int r,int c)
{
int max,i,j;
max=a[0][c]; 
//for(i=0;i<2;i++)
{
for(j=0;j<r;j++)
{
if(a[j][c]>max)
max=a[j][c];
}
}
printf(".....%d\n",max);
return max;
}


main()
{
int i,j,r,c,max;
int a[2][3]={1,2,3,4,5,6};
r=2;
c=1;
max=maximum(a,r,c);
printf("max=%d\n",max);
}
