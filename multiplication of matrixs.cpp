#include<stdio.h>
#include<conio.h>
int main()
{
int A[5][5],B[5][5],C[5][5],i,j,multiplication,row1,col1,row2,col2,k;
printf("enter the row and column of A:");
scanf("%d%d",&row1,&col1);
printf("enter the row and column of B:");
scanf("%d%d",&row2,&col2);

if(col1!=row2)
printf("Multiplication is not possible");
else
{
printf("enter the value ofA:\n");
for(i=0;i<row1;i++)
{
	for(j=0;j<col1;j++)
{
	scanf("%d",&A[i][j]);
}
}
printf("enter the row and column of B\n:");
for(i=0;i<row2;i++)
{
	for(j=0;j<col2;j++)
{
	scanf("%d",&B[i][j]);
}
}
printf("Multiplication value of  C\n");
for(i=0;i<row1;i++)
{
	for(j=0;j<col2;j++)
	{
	
	C[i][j]=0;
	
		for(k=0;k<col1;k++)
		
		{
			C[i][j]=C[i][j]+A[i][k]*B[k][j];
		}
	}
}
for(i=0;i<row1;i++)
{
	for(j=0;j<col2;j++)	
	{
	
	printf("%d",C[i][j]);
}
}
printf("\n");
}
getch();
}





