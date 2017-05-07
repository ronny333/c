#include <stdio.h>
#include <stdlib.h>
enum Error_Code
{
	eSuccess,
	eInvalidIndex,
	eFailed=-1,
	eInsufficientMem=-2
};
int add_end(int *a,int data,int *size)
{
	*size+=1;
	a[*size-1]=data;
	return eSuccess;
}
int insert(int a[],int index,int data,int *size)
{
	*size+=1;
	int N=*size;
	if(index > N)
	{
		printf("Invalid Index\n");
		return eInvalidIndex;
	}
	while(N>=index)
	{
		a[N+1]=a[N];
		N-=1;
	}
	a[index]=data;
	return eSuccess;
}
int add_begin(int a[],int data,int *size)
{
	return insert(a,0,data,size);
}
void print(int *arr,int size)
{
	int i;
	
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");	
}

#define LOG_CHECK_ERROR(__CONDITION__)			\
	do											\
	{											\
		if ((__CONDITION__)){					\
			printf("LOG_CHECK_ERROR called"); goto Exit0;}   \
	} while (0)

int main()
{
	int arr[]={1,2,3,4,5};
	int eRetCode=eFailed;
	int iLen=(sizeof(arr)/sizeof(arr[0]));
	print(arr,iLen);
	//add_end(arr,11,&iLen);
	//add_end(arr,12,&iLen);
	//insert(arr,1,32,&iLen);
	eRetCode = add_begin(arr,222,&iLen);
	LOG_CHECK_ERROR(eRetCode);
	eRetCode = add_end(arr,11,&iLen);
	LOG_CHECK_ERROR(eRetCode);
	print(arr,iLen);
Exit0:	
	return 0;	
}
