#include<stdio.h>
main()
{
int i;
char s[20],ch,ch1;
printf("Enter the string...");
gets(s);//scanf("%s",s);
printf("Enter the char...");
scanf(" %c",&ch);
printf("Replaced char...");
scanf(" %c",&ch1);
for(i=0;s[i];i++)
	{
		if(ch==s[i])
		s[i]=ch1;
	}	
printf("now string is..%s\n",s);
}
