#include<stdio.h>
#include<conio.h>
int main()
{
	int num, temp, rem,n;
	printf("enter any number");
	scanf("%d",&num);
	n=num;
	temp=0;
	while(num!=0)
	{
		rem=num%10;
		temp=temp*10+rem;
	num=num/10;
	}
	printf("%d",temp);
	if(n==temp)
	printf("it is palindrome number");
	else
	printf("it is not palindrom number");
	getch();
}
