#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	char line[80];
	int n=32;
	int scan_line(char line[],int n);
	printf("Enter the line of text:\n");
	scanf("%[^\n]",&line);
	getch();
}
int scan_line(char line[],int x=32)
{
	char oline[80];
	int count=0;
	while(line[count]!='\0')
	{
		if(line[count]>='a'&& line[count]<='z')
		oline[count]=line[count]-32;
		else
		oline[count]=line[count];
		count++;
	}
	oline[count]='\0';
	printf("%s",oline);
}
