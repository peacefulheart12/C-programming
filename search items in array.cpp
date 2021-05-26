#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int	A[10]={1,2,3,4,5,6,7,8,9,10},i,n,counter=0;
	printf("Enter an item to be searched:\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
	if(n==A[i])
	{
	//printf("The num is found %d",n);
	counter++;
	//break;
	}
    }
	if(counter>0)
	{
		printf("found");
	    
	}
	else
	printf("Not found");
	getch();
}


