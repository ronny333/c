#include<stdio.h>
main()
{
printf("Hello..\n");
if(fork())
{
printf("Parent..%d\n",getpid());

}
else
{
printf("Child1..pid=%d ppid=%d\n",getpid(),getppid());
//sleep(2);
	if(fork()==0)
	{
	
printf("Child2..pid=%d ppid=%d\n",getpid(),getppid());
	
		if(fork()==0)
		{
	
printf("Child3..pid=%d ppid=%d\n",getpid(),getppid());
		}
	}
	
}
//while(1);
}
