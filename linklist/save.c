#include "header.c"
void save(struct st *ptr)
{
FILE *fp;
fp=fopen("data","w");
while(ptr)
	{
	fprintf(fp,"%s %d %f\n",ptr->name,ptr->roll,ptr->marks);
//	ptr=ptr->next;
	}
fclose(fp);
}
