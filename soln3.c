//Problem 2: Find out the second greatest element in an array in a function

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
	int array[5] = {10,2,3,4,5};
	int return_val, n; 
	int m = 0, result;
	
	scanf("%d", &n);
	
		
	
	do
	{
		return_val = find_max(array, 5);
		print_array(array, 5);
		result = array[return_val];
		array[return_val] = -9999;
		m++;
	}while(m < n);
	printf("the %d th max index is %d and the value is %d\n",n, return_val, result);

}


