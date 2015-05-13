/*

SCOPE:-- Globally and locally also..

STORAGE:--In data section of RAM
	programmer decides size of data section,depend upon total variables stored..

MEMORY ALLOCATION:--Compile time..	

Default value:-- 0..

Use:-Every time when function call,no need of intialize every time..holds its main value..
	so use for COUNTING HOW MANY TIME FUNCTION CALL...
*/
#include<stdio.h>
void print();
static int i=10;//globally declared
main()
{
//static int count;
int i;//If locally defined than local declaration has higher priority..so here gives garbage value
//if comment "int i",than value of globally defined static gives value to all function below it 
//static int i;//than gives i=0
printf("in main i=%d\n",i);
print();
print();
print();
}

void print()
{
i=20;//here output i=20,no error...Because it is not redeclaration,jst assign value..temporary..
printf("in print i=%d\n",i);
}
