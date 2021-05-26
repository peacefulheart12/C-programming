#include<stdio.h>
#include<conio.h>
struct distance
{
	int feet;
	float inch;
};
/* TODO (#1#):   */
int main()
{
  distance d1,d2,sum;

	printf("enter the feet and inch of first distance");
	scanf("%d%f",&d1.feet,&d1.inch);
		printf("enter the feet and inch of second distance");
	scanf("%d%f",&d2.feet,&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
do
{
	sum.feet=sum.feet+1;
	sum.inch=sum.inch-12;
}while(sum.inch>=12.00);
printf("the val after addition is%d",sum.inch,sum.feet);
getch();
}


