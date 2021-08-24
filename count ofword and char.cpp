#include<stdio.h>//headder
#include<conio.h>//header
int main()//main program
{
	int char_count=0;//initialization
int	word_count=0,i;//count
	char str[50];
	printf("Enter any sentance");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		char_count++;
		else
		word_count++;
	}
	printf("the number of char count is %d ",char_count);
		printf("the number of word count is %d ",word_count+1);
	getch();
}
