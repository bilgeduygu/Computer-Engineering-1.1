#include <stdio.h>
#include <stdlib.h>

#define LEN 30 
void sorting_insertion(int *A,int n)
{
	int i,j,k;
	for(j=1;j<n;j++)
	{
		k=A[j];
		i=j-1;
		while((i>=0)&&(A[i]>k))
		{
			A[i+1]=A[i];
			i--;
		}
		A[i+1]=k;
	}
}
int main()
{
	int i, *A;
	A=malloc(sizeof(int)*LEN);
	srand(911);
	
	for(i=0;i<LEN;i++)
	{
		A[i]=rand() % 1000;
		printf("%d ",A[i]);
	}
	printf("\n");
	sorting_insertion (A,LEN);
	for(i=0;i<LEN;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	free(A);
	return 1;
}
