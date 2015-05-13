//Count how many times char comes
#include<stdio.h>
main()
{
int i,j,count[3]={0,0,0};
char a[20],ch[3];
printf("Enter the string:");
gets(a);
printf("Enter char u want to check:");
for(i=0;i<3;i++)
scanf(" %c",&ch[i]);

for(i=0;i<3;i++)
	{
	for(j=0;a[j];j++)
		if(a[j]==ch[i])
		{
		count[i]++;
		}

		
	}	
for(j=0;j<3;j++)
printf("Char[%d]=%c comes %d times\n",j,ch[j],count[j]);
}

