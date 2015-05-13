#include<stdio.h>
main()
{
int i,j;
int b[2][3]={1,2,3,4,5,6};
int *p;
i=sizeof(b);
j=sizeof(b[0]);
printf("i=%d j=%d\n",i,j);
printf("b=%u &b=%u\n",b,&b);
printf("b+1=%u &b+1=%u\n",b+1,&b+1);
printf("b[0]=%u b[0]+1=%u\n",b[0],b[0]+1);
printf("b[0][0]=%u b[0][1]=%u b[0][2]=%d\n",b[0][0],b[0][1],b[0][2]);
//printf("b=%u &b=%u",b,&b);
}
