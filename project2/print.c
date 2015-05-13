#include"header.c"
void print(struct st *ptr)
{
while(ptr)
{
printf("%d %s %f",ptr->roll,ptr->name,ptr->marks);
ptr=ptr->next;

}


}
