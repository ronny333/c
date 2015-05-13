#include<stdio.h>
main(int argc,char **argv)
{
int i,j,n;
for(i=0;argv[i][1];i++)
	for(j=0;argv[j][i];j++)
	printf("%s's length is %d\n",argv[j][i]);

}
