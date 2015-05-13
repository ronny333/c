#include<stdio.h>
main()
{
int i=2;
char *cp;
cp=&i;
if(*cp==2)
printf("Little enidian..\n");
else
printf("Big enidian...\n");
}
