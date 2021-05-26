#include<stdio.h>
#include<conio.h>
int prime(int n);
int main()
{
	int n,i,j,rem;
	printf("Enter any integer to cheak whether it is prime or not");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			rem=i%j;
			if(rem==0)
			break;
			if(rem!=0)
			printf("%d",i);
		}	
	}
	getch();
}
