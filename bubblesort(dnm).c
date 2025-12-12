#include <stdio.h>

int main()
{
	int i,j,a;
	int k=5,temp;
	int arr[5]={2,5,3,1,4};
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;				
			}
		}
	}
	for(a=0;a<5;a++)
	{
		printf("%d,",arr[a]);
	}

}
