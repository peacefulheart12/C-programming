#include<stdio.h>
#include<conio.h>
int main()
{
int	word_count=0,i;
	char str[50];
	printf("Enter any sentance");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		word_count++;
	}
		printf("the number of word count is %d ",word_count+1);
	getch();
}
