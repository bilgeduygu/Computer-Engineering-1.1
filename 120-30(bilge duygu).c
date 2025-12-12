#include <stdio.h>

int main()
{
	int currentvalue=120;
	int decrementvalue=0;
	int counter=0;
	
	while(currentvalue>30)
	{
		
			printf("\nplease enter decrementvalue\n");
			scanf("%d",&decrementvalue);	
		if(decrementvalue<=30)
		{
			currentvalue=currentvalue-decrementvalue;
			printf("your currentvalule is %d",currentvalue);
			counter=counter+1;
			printf("\ncounter %d\n",counter);
		}
		else if(decrementvalue>30)
		{
			printf("\nwrong number please enter other decrementvalue\n");
			
		}
	}
}
