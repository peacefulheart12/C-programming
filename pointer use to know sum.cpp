#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int sum=0;
int a[5]={1,2,3,4,5};

for(i=0;i<5;i++)
{
	sum+=*(a+i);
}
printf("the sum is %d\n",sum);
getch();
return 0;
}
