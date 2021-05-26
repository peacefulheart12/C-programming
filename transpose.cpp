#include<stdio.h>
#include<conio.h>
int main()
{
	int A[2][2]={{5,6},
	{7,8}};
	int i,j;
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
