#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int sum=0;
	printf("Upto which number?");
	scanf("%d",&n);
	do
	{
		sum=sum+n*n;
		n--;
	}while(n>0);
	printf("the sum is %d",sum);
	getch();
}
