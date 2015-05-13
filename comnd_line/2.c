#include<stdio.h>
main(int argc,char **argv)
{
int i,j;
for(i=0;i<argc;i++)
{
for(j=0;j<argv[i][j];j++);
printf("length of %s is %d\n",argv[i],j);
}

}
