#include <stdio.h>
#include <stdlib.h>

int func(int *arr)
{ 
	int i;
	for(i=0;i<5;i++)
	{
		arr[i]=0;
	}
}
int main()
{
	int *array;
	int i;
	array=(int*)malloc(sizeof(int));
	func(&array[0]);
	for(i=0;i<5;i++)
	{
		printf("%d",array[i]);	
	}
	free(array);
	return 0;

}

