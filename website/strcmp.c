#include<stdio.h>
int my_strcmp(char p[],char q[]);
main()
{
	int i;
	char a[100],b[100];
	printf("Enter two strings:");
	gets(a);
	gets(b);

	i=my_strcmp(a,b);
	printf("%d\n",i);
}
int my_strcmp(char p[],char q[])
{
	int i=0,j;
	//printf("%s %s\n",p,q);
	while(p[i]||q[i])
	{
		if((p[i]=='\0')||(q[i]=='\0'))
			break;
		if(p[i]<q[i])
		{
			j=-1;
			break;
		}
		if(p[i]>q[i])
		{
			j=1;
			break;
		}
		i++;
	}
	if((p[i]=='\0')&&(q[i]=='\0'))
		j=0;

	return j;
}
