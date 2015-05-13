#include<stdio.h>
main()
{
int a[]={0,1,2,3,4};
int *p[]={a,a+1,a+2,a+3};
int **ptr=p;

printf("**ptr=%u\n",**ptr);
//----Now for ptr++ ---//
ptr++;
printf("...........FOR PTR++.........\n");
printf("ptr-p=%u\n",ptr-p);
printf("*ptr-a=%u\n",*ptr-a);
printf("**ptr=%u\n",**ptr);

//----Now for *++ptr ---//
++ptr;
printf("...........FOR *++PTR.........\n");
printf("ptr-p=%u\n",ptr-p);
printf("*ptr-a=%u\n",*ptr-a);
printf("**ptr=%u\n",**ptr);


//----Now for ++*ptr ---//
++*ptr;
printf("...........FOR ++*PTR.........\n");
printf("ptr-p=%u\n",ptr-p);
printf("*ptr-a=%u\n",*ptr-a);
printf("**ptr=%u\n",**ptr);
}
