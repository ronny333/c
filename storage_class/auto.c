/*NOTE:---ALL  AUTO VALIABLES ARE LOCAL VARIABLE
	,BUT ALL LOCAL VARIABLES ARE NOT AUTO VARIABLE...
*/
#include<stdio.h>
void  print(void);
//auto int i=10;//error...cant declare outside the main
 int i=10;//if auto written at beginning than gives error..
//if wwrite as above than no error,and value of i display to below all  printfs
main()
{
//int i=20;//default consider as  auto...
printf("in main i=%d\n",i);
print();

}
void print()
{
//int i;//IF int i declared than gives garbage value....
//If "int i"is commented than i=10,because i=10 globally defined at the beginning
printf("in print i=%d\n",i);


}
