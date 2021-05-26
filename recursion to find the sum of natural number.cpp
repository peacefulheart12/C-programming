#include<stdio.h>
#include<conio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
}
int main()
{
	/* TODO (#1#):   */
	int n;
	printf("Enter any integer");
	scanf("%d",&n);
	int s=sum (n);
	
	printf("the sum is%d",s);
	getch();
}

