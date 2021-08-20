/*
	Name: Gurav Tiwari
	Copyright: 
	Author: 
	Date: 18/02/15 15:43
	Description: C-program to find no. of vowels, digits, whitespaces and other characters using pointer (Input given is a sentence)
*/
#include<stdio.h>// header stdio
//#include<stdlib.h>
#include<conio.h>// conio
//#include<string.h>
#include<ctype.h>//c type
int scan_line(char line[100],int *v,int *d,int *w,int *o)// making initialization
{
	int count=0;
	char c;
	while((c=(toupper(line[count++])))!='\0')
	{
		if(c=='A' || c=='E' || c=='I' || c=='U' || c=='O')
		{
			++*v;
		}
		else if(c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9') //each digits must be checked indivisually since line is a character array (string) where integers are taken as character
		{
			++*d;
		}
		else if(c==' 0') //' ' is used to count the white space instead '\0'
		{
			++*w;
		}
		else
		{
			++*o;
		}
	}
	return *v,*d,*w,*o;
}
int main()
{
	char line[100];
	int d,w,o;
	printf("Enter the sentence:\n");
	scanf("%[^\n]",line);
	int v=d=w=o=0;
	scan_line(line,&v,&d,&w,&o);
	printf("Vowels %d\nNumbers %d\nWhite Spaces %d\nOther characters %d",v,d,w,o);
	getch();
}
