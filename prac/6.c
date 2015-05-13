void f2(int d[][5],int ROWS)
{
int i,j;
for (i=0;i<4;i++)
for (j=0;j<4;j++)
d[i][j]=d[i][j+1]+3;
}
int main()
{
int a[4][5]={ {11,21,3}, {2,3,3}, {7,12,2,2,2}, {32,23}};
int i,j;
//f1(a[2][1],a[3][0]);
f2(a,4);
for (i=0;i<4;i++)
{
for (j=0;j<5;j++)
printf(" %d",a[i][j]);
printf("\n");
}
return 0;
}


