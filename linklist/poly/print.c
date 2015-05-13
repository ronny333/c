#include"header.c"
void print(struct poly *ptr)
{
while(ptr)
{
printf("%dx^%d+",ptr->num,ptr->pow);
ptr=ptr->next;
}



}
