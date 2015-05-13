#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int search(char *,char );
int add(char *);
int count;
char *names[5];
int isequal(char *,char *);
char *getsub(char *,int,int);
char *getright(char *s,int n);
main()
{
int flag=0; 
int i;
//for(i=0;i<5;i++)
//names[i]=malloc(10);
////////////////////////////////
flag=add("Ronil");
if(flag==0)
printf("Not possible");

flag=add("Dharaaa");
if(flag==0)
printf("Not possible");

flag=add("Dharaaaa");
if(flag==0)
printf("Not possible");
////////////////////////////////////
for(i=0;names[i];i++)
printf("%s ",names[i]);
printf("\n");
i=search(names[1],'a');
if(i==0)
printf("Not Found..\n");
else
printf("found at pos %d..\n",i);
//////////////////////////////////
int res;
res=isequal(names[1],names[2]);
if(res==0)
printf("Equal....\n");
else if(res<0)
printf("String 2 is higher...\n");
else
printf("String 1 is higher...\n");
//////////////////////////////////////////

char *t;
t=malloc(10);
t=getsub(names[0],1,4);

printf("string is %s\n",t);
/////////////////////////////////
char *tt;

tt=malloc(10);
tt=getright(names[0],4);

printf("string is %s\n",tt);
}
//////////////////////////////////////////////
int add(char *s)
{
if(count<5)
{
names[count]=s;
count++;
return 1;
}
else
return 0;
///////////////////////////////////////

}
///////////////////////////////////////////
int search(char *s,char ch)
{
int c=0;
while(*s)
{
c++;
if(*s==ch)
return c;
s++;
}
return 0;
}
///////////////////////////////////////////
int isequal(char *p,char *q)
{
while(*p&&*q)
{
if(*p==*q)
{
p++;
q++;
}
}
if(!(*p)&&(!*q))
return 0;
else
return ((*p)-(*q));
//if(((*p)==NULL)&&((*q)==NULL))
//return 0;


}
///////////////////////////////////////////
char *getsub(char *s,int start,int end)
{
char *tmp;
tmp=malloc(10);
int t=end-start,i=0;

while(t>0)
{

tmp[i++]=s[start++];
t--;
}
tmp[i]='\0';
return tmp;
}
char *getright(char *s,int n)
{
char *t;
t=malloc(10);
int tmp=strlen(s)-n,i=0;
while(n>0)
{
t[i++]=s[tmp++];

n--;
}
t[i]='\0';
return t;
}

