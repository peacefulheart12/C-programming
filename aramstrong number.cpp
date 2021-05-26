#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[20];
int length,i;
printf("enter the string");

gets(str);
length=strlen(str);
for(i=length-1;i>=0;i--)
{
	printf("%d",str[i]);
}
getch();
}





