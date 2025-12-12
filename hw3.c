#include <stdio.h>

int main()
{
	int number;
	number=0;
	int choose;
	if(number<500)
	{
		printf("please choose a number less than 500\n");
		scanf("%d",&number,&choose);
		int i;
		for(i=0;i<500;i++)
		rand()%500;
	}
	else if(number>500)
	{
		printf("wrong number choosed");
	}

}
