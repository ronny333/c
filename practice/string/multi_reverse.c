#include<stdio.h>
main()
{
int i,j,k,l;
char a[20],b[20];
printf("1st string:");
scanf("%s",a);

//printf("2nd string:");
//scanf("%s",b);
l=0;
for(i=l;a[i];i++)
{
	for(j=l;a[j]!=' ';j++);
	for(l=0,k=0;l<j-1;k++,l++)
	{
	b[k]=a[l];
	}

}
printf("%s",b);
}
