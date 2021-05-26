#include<stdio.h>
#include<conio.h>
#include<string.h>
struct name{
	char f_name[20];	
		char l_name[20];
			char m_name[20];
};
struct address
{
	char vdc[20];
	char district_no[80];
	int ward_no;
};
struct student 
{
	struct name nm;
	struct address ad;
	
}st[5];


int main()
{
	int i;
	printf("enter the records of 5 students");
	for(i=0;i<1;i++)
	{
		scanf("%s%s%s%s%s%d",st[i].nm.f_name,st[i].nm.l_name,st[i].nm.m_name,st[i].ad.vdc,st[i].ad.district_no,&st[i].ad.ward_no);
	}
//for printing
	for(i=0;i<1;i++)
	{
		printf("The name of the student is%s%s\nThe address of the student is %s%s%s%d",st[i].nm.f_name,st[i].nm.l_name,st[i].nm.m_name,st[i].ad.vdc,st[i].ad.district_no,st[i].ad.ward_no);
}
getch();
}
