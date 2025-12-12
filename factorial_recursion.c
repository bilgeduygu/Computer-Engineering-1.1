#include <stdio.h>

int main()
{
	int num;
	printf("please enter a number");
	scanf("%d",&num);
	printf("factorial = %d",factorial(num));
}
int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*factorial(num-1);
	}
}
