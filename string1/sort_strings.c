#include<stdio.h>
#include<string.h>
main()
{
char a[4][10]={"aa","cc","zz","bb"};
int i,j;
char temp[10];
for(i=0;i<4;i++)
{
	for(j=i+1;j<4;j++)
	{
		if(strcmp(a[i],a[j])<0)
		{
		strcpy(temp,a[i]);

		strcpy(a[i],a[j]);
		strcpy(a[j],temp);
		}

	}



}

for(i=0;i<4;i++)
printf("%s ",a[i]);

}
