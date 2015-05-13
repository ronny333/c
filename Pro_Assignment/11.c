//String length
#include<stdio.h>
main()
{
int l;
char str[20];
printf("Enter the string:");
gets(str);
for(l=0;str[l];l++);
printf("string length is %d\n",l);


}
