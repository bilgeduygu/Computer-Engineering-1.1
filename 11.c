#include <stdio.h>
//b ^ e 
int power_iter(int base, int exp)
{
	int i = 0;
	int result = 1;
	
	for(i=0;i<exp;i++)
	{
		result = result * base ; 
	}
	return result;	
}
int main()
{
	int base = 0;
	int exp = 0;
	printf("Enter base : ");
	scanf("%d",&base);
	printf("Enter exponent : ");
	scanf("%d",&exp);
	printf("iterative : %d \n",power_iter(base,exp));
}
