//24 transpose
#include<stdio.h>//head
#include<conio.h>// head conio
int transpose()// transpose function
{
	int a[2][2],i,j;// int
	printf("enter the no for a:");//print
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("transpose of a is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	transpose();
	getch();
}	
