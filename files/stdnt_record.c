#include<stdio.h>
main(int argc,char **argv)
{
struct st
{
int age;
char name[10];
float sal;

};
struct st e;
int i=0;
FILE *fp;
if(argc!=2)
{
printf("Usage: ./a.out filename\n");
return;
}
fp=fopen(argv[1],"w");
if(fp==NULL)
{
printf("File not present\n");
return;
}

while(i<5)
{

printf("Enter the name:");
scanf("%s %d %f",e.name,&e.age,&e.sal);
fprintf(fp,"%s %d %f\n",e.name,e.age,e.sal);
i++;

}

}
