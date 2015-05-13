#include<stdio.h>
main()
{
int i;
char s[][10]={"ONE","TWO","THREE","FOUR"};
char *p[]={"one","two","three","four"};
for(i=0;i<3;i++)
printf("%s\t",s[i]);
printf("\n");
for(i=0;i<3;i++)
printf("%s\t",p[i]);
printf("\n");
printf("%c\n",s[0][1]);
printf("%c\n",p[0][1]);


//s[0]=s[1];//cant write like this
//for(i=0;i<3;i++)
//printf("%s\n",s[i]);

p[0]=p[1];//we can modify data..
for(i=0;i<3;i++)
printf("%s\t",p[i]);
printf("\n");
}
