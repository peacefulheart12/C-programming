#include<stdio.h>//header
#include<conio.h>
int main()
{
	int i,n,pos,value,a[10],del;
	printf("enter the number of element in array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		printf("enter the position to delete");
	scanf("%d",&pos);
	
	for(i=pos-1;i<=n-1;i++)
	{
		a[i]=a[i+1];
	} 
	for(i=0;i<n-1;i++)
	{
printf("%d",a[i]);
	}
getch();
}
