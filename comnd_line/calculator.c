#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
int n11,n22;
char opr;
char n1,n2;
opr=*argv[2];
//printf("%c\n",opr);
//n1=*argv[2];
//n2=*argv[3];
n11=atoi(argv[1]);
n22=atoi(argv[3]);

//printf("n1=%d\n",n1);
//printf("n2=%d\n",n2);
printf("n11=%d\n",n11);
printf("n22=%d\n",n22);
switch(opr)
{
case '+':printf("sum  is %d\n",(n11+n22));
	break;
case '-':printf("Difference is %d\n",(n11-n22));
	break;
case '*':printf("Multiplication is %d\n",(n11*n22));
	break;
case '/':printf("Divison is %d\n",(n11/n22));
	break;
}
}
