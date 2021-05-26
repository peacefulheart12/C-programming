#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,A[2][2],B[2][2],C[2][2],sum;
printf("enter the valof A\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
	scanf("%d",&A[i][j]);
}
}
printf("enter the valof B\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
	scanf("%d",&B[i][j]);
}
}
printf("enter the valof C\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
	C[i][j]=A[i][j]+B[i][j];
	printf("%d",C[i][j]);
}
printf("\n");
}

getch();

}

