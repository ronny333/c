#include<stdio.h>
main()
{
int i=108,j=109,m;
float f=10.23;
char ch[25];
m=sprintf(ch,"%d %f",i,f);//108 means 3 digit+space(1 digit)+10.23(10.230000)means 9 digit
printf("m=%d\n",m);	  //total m=13		
printf("%s\n",ch);
}
