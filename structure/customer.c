#include<stdio.h>
#define N 3
struct custo
{
int acc_no;
char name[10];
int bal;
};
void check(struct custo []);
void display(struct custo);
void tranfer(struct custo []);
main()
{
int sel;
struct custo c[N];
int i;
int amount;
for(i=0;i<N;i++)
	{
	printf("Enter account no:");
	scanf(" %d",&c[i].acc_no);
	
	printf("Enter name:");
	scanf(" %s",c[i].name);
	
	printf("Enter balance:");
	scanf(" %d",&c[i].bal);

printf("want withdraw/deposit??\n0.deposit\n1.withdraw\n");
scanf("%d",&sel);
if(sel==1||sel==0)
tranfer(c);

//tranfer(c);
	}
check(c);
//printf("want withdraw/deposit??\n0.deposit\n1.withdraw\n");

//tranfer(c);



}

void check(struct custo c[])
{
int i=0;
while(i<N)
	{
	if(c[i].bal<100)
	display(c[i]);
	i++;
	}
}
void tranfer(struct custo c[])
{
int i,sel,amount;

//scanf("%d",sel);
//if(sel==1)
{
printf("Acco.no:%d",c[i].acc_no);
//scanf("%d",&c[i].acc_no);

printf("Amount:");
scanf("%d",&amount);
printf("Code is 1..");
c[i].bal-=amount;
display(c[i]);
//check(c);
}
}

void display(struct custo c)
{

printf("acco_no=%d name=%s\n",c.acc_no,c.name);


}

