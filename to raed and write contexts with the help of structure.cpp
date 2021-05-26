#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct record {
char last_name[20];
char first_name[15];
int age;
float salary;
};
typedef struct record person;
FILE *people;
int main()
{
person employee;
people = fopen("D:\\myfile.txt", "w+");
strcpy(employee.last_name,"MALLA");
strcpy(employee.first_name,"YUBARAJ");
employee.age =40;
employee.salary =35123.0;
fwrite(&employee,sizeof(employee),1,people);
fread(&employee,sizeof(employee),1,people);
strcpy(employee.last_name,"KANDEL");
strcpy(employee.first_name,"PRAKASH");
employee.age=35;
employee.salary=50456.0;
fwrite(&employee,sizeof(employee),1,people);
strcpy(employee.last_name,"TIWARI");
strcpy(employee.first_name,"GAURAV");
employee.age=42;
employee.salary=97853.0;
fwrite(&employee,sizeof(employee),1,people);
strcpy(employee.last_name,"DUMRE");
strcpy(employee.first_name,"PUJA");
employee.age=50;
employee.salary=100254.0;
fwrite(&employee,sizeof(employee),1,people);
fclose(people);
}
