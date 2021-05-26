#include<stdio.h>
#include<conio.h>
int main()
{
int temp,n1,n2;
printf("enter the two numbers");
scanf("%d%d",&n1,&n2);
while(n2!=0)
{
	temp=n1%n2;
	n1=n2;
	n2=temp;
}
printf("the value of hcf is %d",n1);
getch();
}
