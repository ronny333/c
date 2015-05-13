#include<stdio.h>
#include<stdarg.h>
void print(int,...);
main(int argc,char **argv)
{
int i;
for(i=0;i<argc;i++)
print(i,argv[i]);

}

void print(int n,...)
{
va_list p; 
va_start(p,n);
printf("p[%d] is %s\n",n,va_arg(p,char *));
}
