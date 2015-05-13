#include<stdio.h>
main()
{
int a[2][3]={1,2,3,4,5,6};
printf("size of a:%d\n",sizeof(a));
printf("Number of rows:%d\n",sizeof(a)/sizeof(a[0]));
printf("Number of coloums:%d\n",sizeof(a[0])/sizeof(a[0][0]));

}
