#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,pos,value,a[10];
	printf("enter the number of element in array");
	scanf("%d",&n);
		printf("enter the position");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
		a[pos-1]=value;
	}
	printf("the value is %d:",pos);
getch();
}
