#include<stdio.h>
void sortarr(int *p,int q)
{
int i,j,temp;
for(i=0;i<q;i++)
{
	for(j=i+1;j<q;j++)
	{
		if(p[i]>p[j])
		{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		}
	}
}
for(i=0;i<5;i++)
{
printf("%d ",p[i]);

}

}

main()
{
int a[5],i,j;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);

}
sortarr(a,5);


}


