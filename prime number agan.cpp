#include<stdio.h>
#include<conio.h>
int cheak_prime(int);
main()
{
int n,result;
printf("enter an integer to cheak whether it is prime or not\n");
scanf("%d",&n);
result=cheak_prime(n);
if(result=1)
printf("%d is prime\n");
else
printf("%d is not prime\n");
return 0;
}
int cheak_prime(int a);

	int c;
	for(c=2;c<=a-1;c++)
	{
		if(a%c==0)
		return 0;
	}
	if(c==a)
	return 1:
}
