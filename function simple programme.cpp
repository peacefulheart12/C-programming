#include<stdio.h>
#include<conio.h>
int multiply();
int main()
{
	multiply();
	getch();
	return 0;
}
int multiply()
{
	int a,b,c;
	printf("enter first value\n");
	scanf("%d",&a);
		printf("enter second value\n");
	scanf("%d",&b);
	c=a*b;
	printf("te product is%d",c);
	return 0;
}
