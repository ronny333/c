#include<stdio.h>
void print(void);
static int count=0;
main()
{
int i;
print();
print();
print();
printf("in main Count is %d\n",count);
for(i=0;i<3;i++)
{
printf("in loop  count is %d\n",count);
}

}
void print()
{
count++;

}
