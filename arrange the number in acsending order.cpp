#include<stdio.h>
#include<conio.h>
int main()
{
	int num[10],n,i,temp,k;
	printf("Enter the number of integers for rearranging:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
		for(i=0;i<n;i++)
		{
			for(k=0;k<n;k++)
			{
				if(num[k]>num[k+1])
			
			
			{
				temp=num[k];
				num[k]=num[k+1];
				num[k+1]=temp;
			}
		}
	}
		for(i=0;i<n;i++)
			printf("%d\n",num[i]);
			getch();
		
}
