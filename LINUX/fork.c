#include<stdio.h>
main()
{
int ret;
printf("Hello...%d\n",getpid());
ret=fork();
printf("hai..%d\n",ret);

}
