#include<stdio.h>
void uppr_case(char *);
main()
{
char a[20];
printf("Enter the string:");
gets(a);
uppr_case(a);



}
void uppr_case(char *p)
{
int i;
if(*p>'a'&&*p<'z')
{
*p=*p-32;
i=p;

uppr_case(++i);
}
printf("\0");
puts(p);
}
