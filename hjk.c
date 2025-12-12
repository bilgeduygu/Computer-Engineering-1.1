#include <stdio.h>
int main()
{
	int option;
	int selection;
	int a;
	int b;
	int c;
	printf("please press 1 for cappuccino\n, please press 2 for latte\n, please press 3 for turkýsh coffee\n");
	scanf("%d\n",&option);
	
	if(option==1)
	{
		printf("please press 1 for hot selection\n, please press 2 for cold selection");
		scanf("%d\n",&a);
		if(a==1)
		{
			printf("hot cappuccino selected");
		}
		else if(a==2)
		{
			printf("cold cappuccino selected");
		}
	}
	else if(option==2)
	{
		printf("please press 1 for hot selection\n, please press 2 for cold selection\n");
		scanf("%d\n",&b);
		
		if(b==1)
		{
			printf("you chosen hot latte\n");
		}
		else if(b==2)
		{
			printf("you chosen cold latte\n");
		}
	}
	else if(option==3)
	{
		printf("please press 1 for hot elective\n, please press 2 for cold elective\n");
		scanf("%d\n",&c);
		
		if(c==1)
		{
			printf("you elective hot turkýsh coffee");
		}
		else if(c==2)
		{
			printf("you elective cold turkýsh coffee");
		}
	}
	else
	{
		printf("wrong choice\n");
	}
}
