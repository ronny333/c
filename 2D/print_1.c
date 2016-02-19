#include<stdio.h>
main()
{
int i,j;
int a[2][3];
int *p;
for(i=0;i<2;i++)
	{
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
printf("\n");	
}
p=a;
for(i=0;i<6;i++)
	{
	printf("%d ",*(p+i));
	}
printf("\n");
}
/*
>> Inf2cat operation for making .cat(catalog) file from .inf file:
2	
inf2cat /driver:D:\PPort_v7.0.0.8_Sources\testcertificate\ /os:10_x64
3	
4	
>> For adding in Privatestore in certification manager:
5	
makecert -r -pe -ss PrivateCertStore -n CN=OxPport OxPport.cer
6	
makecert -r -pe -ss Root -n CN=OxPport OxPport.cer
7	
8	
>> Sign .cat .dll and .sys file using signtool:
9	
options: /s : for selection of store
10	
			PrivateCertStore : for "PrivateCertStore section"
11	
			Root :  for ""Trusted Root Certification Authorities""
12	
13	
>> SignTool sign /ac OxPport.cer /s Root /n OxPport /t http://timestamp.verisign.com/scripts/timstamp.dll OxPPort.sys OxPPort.cat OxPPort.dll
14	
15	
16	
>> For adding certificate to Trusted Root Certification Authorities : 
17	
certmgr.exe -add OxPport.cer -s -r localMachine root
*/
