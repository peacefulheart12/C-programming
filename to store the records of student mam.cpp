#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int roll_no;
	float percentage;
};
int main()
{
	student st[2];
	int i;
	printf("enter the record of student\n");
	for(i=0;i<2;i++)
	{
		scanf("%s%d%f",st[i].name,&st[i].roll_no,&st[i].percentage);
	}
	//for printing
		for(i=0;i<2;i++)
	{
		printf("The records of student are%s\n%d\n%f",st[i].name,st[i].roll_no,st[i].percentage);
	}
	getch();
}
