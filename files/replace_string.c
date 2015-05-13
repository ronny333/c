#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp,*fp1;
char *p,ch,q[5];
int i=0,c=0,j,k,l,l1,c1=0;
if(argc!=4)
{
printf("Usage: ./a.out file_name s.string dest.string");
return;
}
fp=fopen(argv[1],"r+");
if(fp=='\0')
{
printf("File not present\n");
return;
}
while(fgetc(fp)!=EOF)
c++;

printf("Size of file is %d\n",c);

rewind(fp);
p=malloc(c+1);
//q=malloc(10);
//strcpy(d,argv[2]);
while((ch=getc(fp))!=EOF)
p[i++]=ch;
p[i]='\0';

printf("%s",p);

for(i=0;p[i];i++)
{
	if(p[i]==argv[2][0])
	{

		for(j=1;argv[2];j++)
		{
			if(argv[2][j]!=p[i+j])
			{
			
			break;
			}
			l=i;//start at which string comes
		}	
		if(argv[2][j]=='\0')
		{
			printf("present\n");
			c1++;
                        l1=j+l-1;//store value at which string's last char comes
                        k=1;//printf("String is present\n");
			printf("l=%d l1=%d\n",l,l1);
		}
	}
}
//fp1=fopen(argv[1],"w");

/*for(j=0;argv[3];j++)
q[j]=argv[3][j];
q[j]='\0';
printf("Q=%s\n",q);
*/
/*for(i=l,j=0;i<=l1,argv[3]!='\0';i++,j++)
	{
	p[l]=argv[3][j];
	}
printf("%s\n",p);
*/
}





