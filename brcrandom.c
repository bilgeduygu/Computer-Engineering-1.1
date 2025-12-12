#include <stdio.h>

int main()
{
	double max;
	double min;
	int i;
	double average;
	int choice;
	
	printf("enter max\n");
	scanf("%lf",max);
	
	printf("enter min\n");
	scanf("%lf",min);
	
	for(i=0 ;; i++)
	{
		average=((int)max+(int)min)/2;
		printf("is your number %ld?\n if %lf so enter 1, for right press 2\n for left press 3\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("your number : %d",average);
			printf("I found your number in %dth try");
			break;
		}	
		else if(choice==2)
		{
			min=average;
		}
		else if(choice==3)
		{
			max=average;
		}
	}
}
