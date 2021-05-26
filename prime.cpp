#include<stdio.h>
#include<conio.h>
int print_prime(int num);
int main()
{
	int n1,n2,i,flag;
printf("enter intervals:");
scanf("%d %d",&n1,&n2);
printf("prime numbers between %d and %d are:\n",n1,n2);
for(i=n1+1;i<n2;i++)
  {
	flag=print_prime(i);
	if(flag==0)
	printf("%d\n",i);
  }
  getch();
}
int print_prime(int num)
{
	int j,flag=0;
	for(j=2;j<=num/2;j++)
	{
		if(num%j==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
