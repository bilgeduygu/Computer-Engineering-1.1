//Problem 4: swap and bubble sort
#include <stdio.h>

void print_array(int array[], int n)
{

	int  i = 0;
	printf("\n");
	for(i = 0; i < n; i++)
	{
		printf(" %d", array[i]);
	}
	printf("\n");
}
void main()
{

	int array[10] = {4,3,5,7,7,9,1,2,0,6};
	int temp;
	int size = 10;
	int i, j;
	print_array(array,size);
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size-i-1; j++ )
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}	
	print_array(array,size);	
}











