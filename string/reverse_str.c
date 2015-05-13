#include<stdio.h>
main()
{
char s[20],temp,save[20];
int i,j,l,c=0;
printf("Enterthe string:");
scanf("%s",s);
for(l=0;s[l];l++);
printf("Length is %d\n",l);
	for(i=0;s[i];i++)
	save[i]=s[i];		//COPY string logic
	save[i]='\0';
	printf("save=%s....\n",save);
		
for(i=l-1,j=0;i>j;j++,i--)
	{
	temp=s[i];
	s[i]=s[j];//Reverse logic..swaping bits...
	s[j]=temp;
	}

printf("Reverse string is %s\n",s);
	for(i=0;s[i];i++)
		if(s[i]==save[i])	//COMPARE string logic
		{
		c++;
		}		
if(c==l)
printf("String and its reverse are Equal.....\n");			
else
printf("String and its reverse are Not Equal....\n");

}
