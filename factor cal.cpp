#include<stdio.h>
#include<conio.h>
int main()//main funf
{
	int i,n;// initialization of integers
	printf("Enter any number:");// inter any number
	scanf("%d",&n);// scan that number
	for(i=1;i<=n;i++)// for loop
	{
		if(n%i==0)
		printf("the factor is :%d\n",i);
	
	else
	printf("the factor is not:%d\n",i);
}
	getch();
}
