#include<stdio.h>
main()
{
FILE *fp;

struct emp{
char name[10];
int age;
float sal;

};
struct emp e;
fp=fopen("data","r");
if(fp==NULL)
{printf("Not present\n");
return;
}

while((fscanf(fp,"%s %d %f",e.name,&e.age,&e.sal))!=EOF)
{
printf("%s %d %f",e.name,e.age,e.sal);
}


}
