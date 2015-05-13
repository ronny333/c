#include<stdio.h>
main()
{
int i,l,j;
char s[20];
printf("Enter  the string..");
gets(s);
abc: for(i=0;s[i];i++)
	{
	if((s[i]==' ')&&(s[i+1]==' '))
	{
		j=i;
		while(s[j])
		{
		s[j]=s[j+1];
		j++;
		}
	goto abc;
	}

}
//s[i]='\0';
printf("%s\n",s);
}
