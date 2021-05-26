#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i=0,j=0;
	char str1[50],str2[50];
	printf("enter the first string");
	gets(str1);
	printf("Enter the secomd string");
	gets(str2);
	while(str1[i]!='\0')
	{
		i++;
	}
		while(str2[j]!='\0')
		{
			str1[i++]=str2[j++];
		}
		str1[i]='\0';
	puts(str1);

getch();
}
