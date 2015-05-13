#include<stdio.h>
main()
{
int ret;
printf("Hello..\n");
if(ret=fork())
{
printf("Parent..%d\n",getpid());
}
else
{
printf("Child1..pid=%d ppid=%d\n",getpid(),getppid());
//printf("Child3..pid=%d ppid=%d\n",getpid(),getppid());

}
if(ret==0)
printf("Child2..pid=%d ppid=%d\n",getpid(),getppid());

}
