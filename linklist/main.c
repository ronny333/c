#include"header.c"
main()
{
struct st *headptr=0,*tmp1;
add_end(&headptr);
add_end(&headptr);
add_end(&headptr);
save(headptr);
print(headptr);
}

