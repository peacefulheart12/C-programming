#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[25];
	int len,	clrscr();
	printf("Enter the string");
	gets(str);
	strlwr(str);
	printf("%s",str);
	getch();
}
