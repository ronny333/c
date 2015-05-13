#include<stdio.h>
main(int argc,char **argv)
{
int i;
if(argc!=2)
{
printf("Usage..len string..\n");
return 0;
}
for(i=0;argv[1][i];i++);
printf("length is %d\n",i);
}
