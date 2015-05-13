#include<stdio.h>
void count_nonalfa(char *);
main()
{
char a[20];
printf("Enter the string:");
gets(a);
count_nonalfa(a);


}
void count_nonalfa(char *p)
{
int i;
int count=0;

if(!(((p[i]<120&&p[i]>97)||(p[i]>65&&p[i]<90))||p[i]))
{
count++;

p=p+1;
count_nonalfa(p);
}
else
{

p=p+1;
count_nonalfa(p);
}
printf("Count=%d\n",count);

}
