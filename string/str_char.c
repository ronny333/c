#include<stdio.h>
main()
{
int i,c=0;
char a[20],ch;
printf("Enter the string:");
//scanf("%s",a);
gets(a);//for including space use gets()function
printf("enter the char:");
scanf(" %c",&ch);

for(i=0;a[i];i++)
	{
	if(a[i]==ch)
	c++;
	}
if(c==0)
printf("Char not present..\n");
else
printf("Char present %d times\n",c);
}










