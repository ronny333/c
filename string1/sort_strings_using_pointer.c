//array of pointers
#include<stdio.h>
#include<string.h>
main()
{
char *a[4]={"aa","cc","zz","bb"};
int i,j;
char *temp;
for(i=0;i<4;i++)
{
	for(j=i+1;j<4;j++)
	{
		if(strcmp(a[i],a[j])<0)
		{
		temp=a[i];

		a[i]=a[j];
		a[j]=temp;
		}

	}



}

for(i=0;i<4;i++)
printf("%s ",a[i]);
printf("\n");
}
