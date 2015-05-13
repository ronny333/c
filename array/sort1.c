//binary search
#include<stdio.h>
int search(int arr[],int n)
{
int low=0,mid,high=4,i;
mid=5/2;
	while(low<=high)
	{
	if(n>arr[i])
	low=mid+1;
	else if(n<arr[i])
	high=mid-1;
	else
	return i;
	}
return -1;
}


main()
{
int i,a[20],item,n,index;

for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("Enter item to be searched..\n");
scanf("%d",&item);
index=search(a,item);
if(index==-1)
printf("%d not found..\n",item);
else
printf("%d found at %dth index\n",item,index);
}





