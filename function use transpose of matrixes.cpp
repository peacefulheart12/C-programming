#include<stdio.h>
#include<conio.h>
int transpose_matrix(int num);
int main()
{
	int i,j,row,col,A[10][10];
	printf("enter the number of rows and col of matrixs");
	scanf("%d%d",&row,&col);
	printf("enter the elements of matrixes\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		printf("%15d",A[j][i]);
	}
	printf("\n");
}
getch();
}
