#include<stdio.h>
#include<conio.h>

int main()
{

int rem, temp, num;
printf("enter any number");
scanf("%d",&num);
temp=0;
while(num!=0)
{
	rem=num%10;
	temp=(temp*10)+rem;
	num=num/10;
}
printf("Reverse number is %d",temp);
getch();
}
	
	

