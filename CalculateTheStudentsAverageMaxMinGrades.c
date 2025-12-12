#include <stdio.h>

int main()
{
	int num,grades,i,average,sum,size;
	printf("Please enter the number of students :");
	scanf("%d",&i);
	int array[i];
	
	for(grades=0;grades<i;++grades)
	{
		printf("%d. student's grade: ",grades+1);
    	scanf("%d", &array[grades]);
	}
	printf("Average = %d",(calculateAverage(array,i)));
	printf("\nMax = %d",(calculateMax(array,i)));
	printf("\nMin = %d",(calculateMin(array,i)));
}
int calculateAverage(int *array,int i)
{
	int k,sum=0,average;
	for(k=0;k<i;k++)
	{
		sum=sum+array[k];
	}
	average = sum/i;
	return average;
}
int calculateMax(int *array,int i)
{
	int j,max=-9999;
	for(j=0;j<i;j++)
	{
		if(array[j]>max)
		{
			max=array[j];
		}
	}
	return max;
}
int calculateMin(int *array,int i)
{
	int k,min=9999;
	for(k=0;k<i;k++)
	{
		if(array[k]<min)
		{
			min=array[k];
		}
	}
	return min;
}

