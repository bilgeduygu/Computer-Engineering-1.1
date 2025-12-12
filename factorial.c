#include <stdio.h>

int main()
{
	int factorial = 1;
	int  number = 0;
	printf("please enter a number");
	scanf("%d",&number);
	
	while (number >= 2)
	{
    factorial*= number;
	number--;
	}
	printf("%d",factorial);
}
