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
	char mytext[100];
	printf("i am writing you\n");
	scanf("%s",mytext);
	fprintf(fptr,mytext);
}
fclose(fptr);
getch();
}
	
