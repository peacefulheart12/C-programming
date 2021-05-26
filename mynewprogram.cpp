#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	char address[20];
	int age;
	char semester[20];
}st[2];
int main()
{
	FILE *fptr;//file pointer for writing and reading
	fptr=fopen("d:\\1.txt","w");//file open for writing
	int i;
	char d,myword[10];
	if(fptr==NULL)
	printf("the file does not exist");
	else
	{
		printf("enter the name in string,address in string,age in integer & semestr in string\n");
		for(i=0;i<2;i++)
		{
		scanf("%s%s%d%s",st[i].name,st[i].address,&st[i].age,st[i].semester);
		fwrite(&st[i].name,sizeof(st[i].name),1,fptr);		
		fwrite(&st[i].address,sizeof(st[i].address),1,fptr);	
		fwrite(&st[i].age,sizeof(st[i].age),1,fptr);	
		fwrite(&st[i].semester,sizeof(st[i].semester),1,fptr);	
		}
	}
	fclose(fptr);
	FILE *fptr1;
	fptr1=fopen("d:\\1.txt","r");//file open for reading
		
do{
		
		fread(&st[i].name,sizeof(st[i].name),1,fptr);		
		fread(&st[i].address,sizeof(st[i].address),1,fptr);	
		fread(&st[i].age,sizeof(st[i].age),1,fptr);	
		fread(&st[i].semester,sizeof(st[i].semester),1,fptr);	
		

		d=fscanf(fptr,"%s",myword);//get one word from file
			if(d!=EOF)
			{		
			printf("%s",myword);//display it on the screen			
			
			}
		
	}while(d!=EOF);	
	fclose(fptr1);
	getch();
}
