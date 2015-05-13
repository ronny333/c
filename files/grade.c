#include<stdio.h>
struct st
{
int roll;
char name[20];
float marks;
}s;
main()
{
int i,n;
FILE *fp;
fp=fopen("studata","r");
if(fp==NULL)
{
printf("FIle not present\n");
return;
}
while(fread(&s,sizeof(s),1,fp)==1)
{
printf("%s %d %f\n",s.name,s.roll,s.marks);
if(s.marks>=80)
printf("A\n");
else if(s.marks>=60)
printf("B\n");
else
printf("C\n");
}
fclose(fp);
}
