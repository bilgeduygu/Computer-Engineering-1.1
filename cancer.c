#include <stdio.h>
#include <stdlib.h>

int func(int **array)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			array[i][j]=5;
		}
	}
}
int main()
{
	int i,j;
	int r=3;
	int c=3;
	int **arr;
	arr=(int**)malloc(r*sizeof(int*));
	
	for(i=0;i<c;i++)
	{
		arr[i]=(int*)malloc(c*sizeof(int));	
	}
	func(&arr[0]);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	free(arr);
	return 0;

}
