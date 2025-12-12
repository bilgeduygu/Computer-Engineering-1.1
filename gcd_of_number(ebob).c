#include <stdio.h>

int main()
{
	int num1,num2;
	printf("please enter a number");
	scanf("%d %d",&num1,&num2);
	printf("%d",gcd_of_number(num1,num2));
}
int gcd_of_number(int num1,int num2)
{
	if(num2!=0)
	{
		return (gcd_of_number(num2,num1%num2));
	}
	else w
	{
		return num1;
	}
}
