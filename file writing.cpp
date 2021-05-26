#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	//fptr=fopen("1.txt","modes");
	fptr=fopen("D:\\1.txt","w");
	char c;
	if(fptr==NULL)printf("File does not exist");
	else
{
	fprintf(fptr,"hello file,i am writing you\n");
}
fclose(fptr);
getch();
}
	
