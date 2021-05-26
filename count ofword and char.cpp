#include<stdio.h>
#include<conio.h>
int main()
{
	int char_count=0;
int	word_count=0,i;
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
