#include<stdio.h>
main()
{
/*int a[2][3]={1,2,3,4,5,6};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d ",a[i][j]);
printf("\n");
}
OUTPUT:1 2 3 
       4 5 6

*/

/*int a[2][3]={1,2,3,4};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d ",a[i][j]);
printf("\n");
}

OUTPUT:1 2 3
       4 0 0
*/
int a[2][3]={{1,2},{3,4}};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d at %u\t",a[i][j],&a[i][j]);
printf("\n");
}



}
