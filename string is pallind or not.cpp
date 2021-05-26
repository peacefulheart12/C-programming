#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
int	i,j,len,flag=0;
len=strlen(str);
printf("Enter any string:");
gets(str);
i=0,j=len-1;
while(j>i)
{
if(str[i++]!=str[j--])
{
flag=1;
break;
}
}
if(flag==0)
printf("%sThe string is not  palindrome");
else
printf("%sThe string is palindrome:%c" );
getch();
}

