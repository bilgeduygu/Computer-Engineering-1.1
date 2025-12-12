#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,grades,i,average,sum,size,add,k;
	printf("Please enter the number of student :");
	scanf("%d",&i);
	
	int *p;
	p=(int*)malloc(i*sizeof(int));
		
	for(grades=0;grades<i;++grades)
	{
		printf("%d. student's grade: ",grades+1);
    	scanf("%d",p+grades);
	}
	printf("Average = %d",(calculateAverage(p,i)));
	printf("\nMax = %d",(calculateMax(p,i)));
	printf("\nMin = %d",(calculateMin(p,i)));
	
	printf("\nhow many students do you want to add\n");
	scanf("%d",&add);
	p=realloc(p,i+add);
	printf("please enter student grade that you added");
	
	for(k=i;k<i+add;k++)
	{
		scanf("%d",p+k);
	}

	printf("Average = %d",(calculateAverage(p,i+add)));
	printf("\nMax = %d",(calculateMax(p,i+add)));
	printf("\nMin = %d",(calculateMin(p,i+add)));	
	free(p);
}
int calculateAverage(int *array,int i)
{
	int k,sum=0,average;
	for(k=0;k<i;k++)
	{
		sum=sum+array[k];
		
	}
	average=sum/i;
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
