//Problem 1: Find out the maximum element in an array in a function
#include <stdio.h>

int find_max(int array[], int size){

	int i, max = -9999 , max_index = -1;
	for(i = 0;  i < size ; i++ )
	{
		if(array[i] > max)
		{
			max = array[i];
			max_index = i;
		}
	}
	
	return max_index;
}

void main()
{
	int array[5] = {10,2,3,4,5};
	int return_val; 
	return_val = find_max(array, 5);
	if(return_val != -1)
	{
		printf("the max index is %d and the value is %d\n", return_val, array[return_val]);
	}
	else
	{
		printf("array is empty\n");
	}

}


