#include <stdio.h>

int main()
{
	int currentvalue=120;
	int decrementvalue;
	int counter;
	int i;
	if(decrementvalue<=30)
	{
		printf("please enter decrement number\n");
		scanf("%d",&decrementvalue);
			
		currentvalue = currentvalue - decrementvalue;	
	}
	else if(currentvalue>30)
	{
		printf("wrong number choosed");
	}

}
