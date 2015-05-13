#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
int n11,n22;
char opr;
opr=*argv[2];
n11=atoi(argv[1]);
n22=atoi(argv[3]);

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
