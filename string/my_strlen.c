#include<stdio.h>
void my_strln(char *);
main()
{
int i;
char a[20];
char *p;
/*printf("Enter the string:");
scanf("%s",a);
for(i=0;a[i];i++);
printf("%d\n",i);
*/
p=a;
printf("enter the string:");
//scanf("%s",a);
gets(a);

my_strln(a);
}

void my_strln(char *p)
{
int i;
for(i=0;*p++;i++);
printf("%d\n",i);

}
