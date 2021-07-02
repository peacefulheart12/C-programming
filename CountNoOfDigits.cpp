#include<stdio.h>// Headers
#include<conio.h>
int main()//main func
{
	int n,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n!=0)

	{
		n=n/10;
		count++;	
	}
	printf("The number of digits of given integer is:%d",count);
	getch();
}
