#include <stdio.h>

int main()
{
	int option;
	int a;
	int b;
	int c;
	printf("please press 1 for credit card operations\n , please press 2 for money transfer\n , press 3 for current balance\n ");
	scanf("%d", &option);
	
	if(option==1)
	{
		printf("please press 1 for request credit card , please press 2 for inform about lost credit card");
		scanf("%d" ,&a);
		if(a==1)
		{
			printf("request credit card");
		}
		else if(a==2)
		{
			printf("lost credit card informed");
		}
	}
	else if(option==2)
	{
		printf("please press 1 for transfer to another account with iban, please press 2 for transfer to another account with branch and bank account");
		scanf("%d",&b);
		
		if(b==1)
		{
			printf("transfer to another account with iban");
		}
		
		else if(b==2)
		{
			printf("transfer to another account with branch and bank account");
		}
	}
	else if(option==3)
	{
		printf("current balance");
		scanf("%d",&c);
	}
}
