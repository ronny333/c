#include<stdio.h>
main()
{
	if(fork()==0)
	{
	printf("child1...%d\n",getppid());
	sleep(10);
	}	
		else
		{
		if(fork()==0)
			{
			printf("child2...%d\n",getppid());
			sleep(2);
			}
			else
			{
				if(fork()==0)
				{	
				printf("child3...%d\n",getppid());
				sleep(5);
				}
				else
				{
				printf("Parent..%d\n",getpid());
				wait(0);
				}		
			}
		
		}
}





