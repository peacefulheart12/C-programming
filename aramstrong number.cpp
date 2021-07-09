#include<stdio.h>//header
#include<conio.h>//header
#include<string.h>//header
int main() //main program starts
{
char str[20];//defining string length
int length,i;// initialization
printf("enter the string");

gets(str);
length=strlen(str);
for(i=length-1;i>=0;i--)//for loop initiated
{
	printf("%d",str[i]);//Circulating the loop
}
getch();//  program end
}





