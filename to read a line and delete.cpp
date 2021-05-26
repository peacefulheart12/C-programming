#include<stdio.h>
#include<conio.h>
int main()
{
	char str[]="I love that c that programming";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==116&&str[i+1]==104&&str[i+2]==97&&str[i+3]==116&&str[i+4]==32)
		{
			for(i=0;str[i+5]!='\0';i++)
			str[i]=str[i+5];
			str[i]='\0';
		}
	}
	printf("%s",str);
	getch();
}
