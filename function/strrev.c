#include<stdio.h> 
#include<string.h> 
void strrev1(char *,int );

main()
{
char a[30];
printf("Enter the string:");
gets(a);
printf("string is:%s\n",a);
strrev1(a,strlen(a));
printf("reversed string is :%s\n",a);
}

void strrev1(char *p,int l)
{

static int i=0;
char ch;
	if(i>l)
	return;
	else
	{
		ch=p[l-1];
		p[l-1]=p[i];
		p[i]=ch;
	i++;
	strrev1(p,l-1);
	}
}
