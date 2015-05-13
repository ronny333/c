/*NOTE:---ALL  AUTO VALIABLES ARE LOCAL VARIABLE
	,BUT ALL LOCAL VARIABLES ARE NOT AUTO VARIABLE...

SCOPE OF AUTO VARIABLE IS ONLY INSIDE MAIN FUNCTION
if access outside of main loop  than gives error:TRANSLATOR error..

MEMORY ALLOCATION:--Run time...

USE:safety purpose...save  memory

DEFAULT VALUE: Garbage  value

Scope:within main()

STORAGE:--In stack memory..

Life:--Start with function start execution and ends with complition of job..
*/
#include<stdio.h>
void  print(void);
main()
{
auto int i=20;//default consider as  auto...
printf("in main i=%d\n",i);
print();
}
void print()
{
auto int i;//IF int i declared than gives garbage value....
//if not declare than gives  error that "i is  undeclare"
printf("in print i=%d\n",i);
}
