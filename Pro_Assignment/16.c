//.... strchr function...
#include<stdio.h>
main()
{
int i,k=0;
char ch,a[20];
printf("Enter the string:");
gets(a);
printf("Enter char:");
scanf(" %c",&ch);

for(i=0;a[i];i++)
{
	if(a[i]==ch)
	k++;
	//else
	//k=0;

}
if(k!=0)
printf("Char is present\n");
else
printf("Char not present\n");
}
