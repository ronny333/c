#include<stdio.h>
main()
{
char *str1="abcd";
char str2[]="abcd";
char str3[]="vector";
printf("%d %d %d %d\n",sizeof(str1),sizeof(str2),sizeof("abcd"),sizeof(str3));


}
