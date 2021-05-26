#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("the factor is :%d\n",i);
	
	else
	printf("the factor is not:%d\n",i);
}
	getch();
}
