
#include<stdio.h>
#include<conio.h>
int main()
{
int A[10],B[10],C[10],i,j,k;

for(i=0;i<10;i++)
{
	scanf("%d",&A[i]);
}
for(j=0;j<10;j++)
{
	scanf("%d",&B[j]);
}
printf("the sum is");
for(k=0;k<10;k++)
{
	C[k]=A[k]+B[k];
	printf("%d",C[k]);
}
getch();
}
