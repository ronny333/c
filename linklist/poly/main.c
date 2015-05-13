#include"header.c"
main()
{
struct poly *headptr=0;
printf("Enter firat eq..");
add_middle(&headptr);
print(headptr);
printf("Enter second eq..");
add_middle2(&headptr);
print(headptr);
}
