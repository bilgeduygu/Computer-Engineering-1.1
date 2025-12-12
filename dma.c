#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	// This pointer will hold the 
	// base address of the block created 
	int* ptr; 
	int n, i, sum = 0; 

	n = 10; 
	printf("Enter number of elements: %d\n", n); 

	// Dynamically allocate memory using malloc() 
	ptr = (int*)malloc(n * sizeof(int)); 
	
	printf("Memory successfully allocated using malloc.\n"); 

	for (i = 0; i < n; ++i)
	{ 
		ptr[i] = i + 1; 
	} 

	printf("The elements of the array are: "); 
	for (i = 0; i < n; i++) { 
		printf("%d, ", ptr[i]); 
	} 

	return 0; 
} 

