#include<stdio.h>
#include<conio.h>
int main()
{
	int x[10],i;
	for(i=0;i<10;i++)
	{
		printf("the outputs are:\n");
		scanf("%d",&x[i]);
		printf("%50d", x[i]);
	}
	getch();
}
