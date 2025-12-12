//time complexity = n*log(n)
//because merge sort apply -divide and conquere-, that's why every dividing operation calculating with log(n)
#include <stdio.h>
#include <stdlib.h>
#define LEN 30
#define INF 30000

//void merge function time complexity = O(n)
void merge(int *A, int p,int q,int r)
{
	int i,j,k,n1,n2,*L,*R;
	n1=q-p+1;
	n2=r-q;
	L=(int *)malloc(sizeof(int)*(n1+1));
	R=(int *)malloc(sizeof(int)*(n2+1));
	for(i=0;i<n1;i++)
	{
		L[i]=A[p+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=A[q+1+j];
	}
	i=j=0;
	L[n1]=R[n2]=INF;
	for(k=p;k<r;k++)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
	}
	free(L);
	free(R);
} 
void mergesort(int *A,int p,int r)
{
	int q;
	if(r>(p+1))
	{
		q=(p+r)/2;
		mergesort(A,p,q);
		mergesort(A,p,r);
		merge(A,p,q,r);
	}
}
void sorting_merge(int *A,int n)
{
	mergesort(A,LEN,n);
}
int main()
{
	int i,*n;
	n=malloc(sizeof(int)*LEN);
	srand(911);
	for(i=0;i<LEN;i++)
	{
		n[i]=rand()%1000;
		printf("%d ",n[i]);
	}
	printf("\n");
	sorting_merge(n,LEN);
	for(i=0;i<LEN;i++)
	{
		printf("%d ",n[i]);
	}
	printf("\n");
	free(n);
	return 1;
}
