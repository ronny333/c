#include<stdio.h>
main()
{
	int i,j,k=0,c=0,l=0,l1=0;
	char s[20],d[20];
	printf("Enter the Source string.....");
	scanf("%s",s);
	printf("Enter desti string......");
	scanf(" %s",d);

for(i=0;s[i];i++)
{
	if(s[i]==d[0])
	{
		for(j=1;d[j];j++)
		{
			if(d[j]!=s[i+j])
			{
				break;
			}
		l=i;//store start value at which string comes into picture
		}
	
		if(d[j]=='\0')
		{
			c++;
			l1=j+l-1;//store value at which string's last char comes
			k=1;//printf("String is present\n");
printf("l=%d l1=%d\n",l,l1);
		}
	}
}
	if(k==1)
	printf("file is present %d times\n",c);
	else
	printf("file is not present\n");
}

