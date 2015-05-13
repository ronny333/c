#include<stdio.h>
#include<string.h>
main( )
{
FILE *fp ;
char s[80] ;
fp = fopen ("data.c","w") ;
if (fp == NULL)
{
puts ("Cannot open file") ;
return;
}
printf ("\nEnter a few lines of text:\n" ) ;
while (strlen (gets (s))>0 )
{
fputs (s,fp);
fputc('\n',fp);
//fputs ("\n",fp);
}
fclose (fp );
}
