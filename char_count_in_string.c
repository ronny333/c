#include<stdio.h>
#include<stdlib.h>
main()
{
char tmp[]="Ronilaaaa";
char a[50];
strcpy(a,tmp);
printf("%s.....\n",a);
int b='a';
char c[26],ch;
int i,j;
int count[26];
for(i=0;i<26;i++)
{
c[i]=b++;
count[i]=0;
//printf("%c ",c[i]);
}
for(i=0;i<26;i++)
{
//c[i]=b++;
printf("%c ",c[i]);
}
printf("\n");
for(i=0;c[i];i++)
{

ch=c[i];
	for(j=0;a[j];j++)
	{
		if(ch==a[j])
		{
		a[j]=0;
		count[i]++;
		}
	}

printf("%c comes %d times..\n",ch,count[i]);

}
}
