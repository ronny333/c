#include<stdio.h>
main()
{
int i,j,count=0;
char a[20],b;
printf("Enter the string:");
gets(a);

for(i=0;a[i];i++)
	{
	count=0;
	b=a[i];
	for(j=0;a[j];j++)
	{
		while(a[j]==b)
		{
		count++;
		for(j=0;a[j];j++)
		{a[j]=a[j+1];
		
		}j++;
			}
	}

printf("%c comes %d times\n",b,count);
	}


}
