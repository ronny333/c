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
fp=fopen("studata","w+");
if(fp==NULL)
{
printf("FIle not present\n");
return;
}
printf("Enter num of student");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("name..rollno..marks...");
scanf("%s %d %f",s.name,&s.roll,&s.marks);
fwrite(&s,sizeof(s),1,fp);
}
fclose(fp);
}
