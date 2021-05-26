#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	//fptr=fopen("1.txt","modes");
	fptr=fopen("D:\\1.txt","r");
	char c;
	if(fptr==NULL){printf("File does not exist");
	}
	else
	{
	
	do{
		c=fgetc(fptr);
		putchar(c);
		
	}while(c!=EOF);
}
	getch();
}
