//calculating the average in between two indices
#include <stdio.h>

int average(int array[], int m, int l)
{
	int i, sum=0;
	for(i=m;i<l+1;++i)
	{
		sum=sum+array[i];
	}
	return sum/(l-m+1);
}
int main()
{
	int array[15] = {10,2,3,4,5,37,12,54,15,34,786,89,98,76,23};
	int m,l;
	printf("enter the first index \n");
	scanf("%d", &m);
	printf("enter the second index \n");
	scanf("%d", &l);	
	
	printf("the average between %d and %d is %d\n", m, l, average(array,m,l));	
}

