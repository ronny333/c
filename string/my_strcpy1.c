#include<stdio.h>
void my_strcpy(char *,char *);
main()
{
char s[20],d[20];
printf("Enter Source string:");
scanf("%s",s);
my_strcpy(d,s);//d and s contains adress that passes to q and p...
printf("Destination string is %s\n",d);
}
void my_strcpy(char *p,char *q)//value at adress passes in function
{
int i;
for(i=0;q[i];i++)//Cant write *q++???????
//p[i]=q[i];
*(p+i)=*(q+i);//is equal to p[i]=q[i]
p[i]='\0';

}
