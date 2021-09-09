//24 transpose
#include<stdio.h>//head
#include<conio.h>
int transpose()
{
	int a[2][2],i,j;
	printf("enter the no for a:");
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
