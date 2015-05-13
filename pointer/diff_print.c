#include<stdio.h>
void print(char **,int);
main()
{
char *s[5];
char *p[]={"one","two","three","four"};
printf("%u\n",*s[0]);
print(s,4);

}
/*void print(char (*p)[10],int l)
{
int i;
for(i=0;i<4;i++)
printf("%s\t",p[i]);

}
*/

void print(char **p,int l)
{
int i;
for(i=0;i<l;i++)
printf("%s\t",p[i]);
printf("\n");
}



