#include<stdio.h>
#include<string.h>
main()
{
int i,j,k;
char s[3][10],p[10],q[10];
p[10]=s;
for(i=0;i<3;i++)
scanf("%s",s[i]);

for(j=0;j<2;j++)
{
		for(i=0;i<3;i++)
		{
		k=strcmp(s[i+1],s[i]);
		if(k==1)
		{
		q[10]=p[i+1];
		p[i+1]=p[i];
		p[i]=q[10];	
		}
		
		}

}
for(i=0;i<3;i++)
printf("%s\n",s[i]);
}
