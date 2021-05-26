#include<stdio.h>
#include<conio.h>
int main()
{
char num;
scanf("%d",&num);
switch(num)
{
	case1:printf("sunday");break;
	case2:printf("monday");break;
	case3:printf("tuesday");break;
	case4:printf("wednesday");break;
	case5:printf("thursday");break;
	case6:printf("friday");break;
	case7:printf("saturday");break;
	default:printf("invalide");break;
	}
	getch();
}
