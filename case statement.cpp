#include<stdio.h>
#include<conio.h>
int addition()
	{
		int a,b,c;//initialization
		scanf("%d",&a);//scan
			scanf("%d",&b);
			c=a+b;//main operation
			printf("The sum is:%d",c);
	}
		int mult()//init multi
		
	{
		int a,b,c;//init a,b,c
		scanf("%d",&a);//scan
			scanf("%d",&b);
			c=a-b;
			printf("%d",c);
	}
		int diff()
	{
		int a,b,c;
		scanf("%d",&a);
			scanf("%d",&b);
			c=a*b;
			printf("%d",c);
	}
	
int main()
{
	int a, b,c,num;
	printf("Enter choice");
	scanf("%d",&num);
	switch(num)
	{
		case 1:addition();break;
				case 2:mult();break;
						case 3:diff();break;
								case 4:printf("Invalid");break;
	}
	getch();
	return 0;
}
