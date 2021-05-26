#include<stdio.h>
#include<conio.h>
int main()
{
	int i,row,j,n;
	j=n;
	printf("enter the rows of tringle");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
	for(i=1;i<j;i++)
	printf(" ");
	j--;
	for(i=1;i=2*row-1;i++)
	printf("*");
	printf("\n");
}
getch();
}
