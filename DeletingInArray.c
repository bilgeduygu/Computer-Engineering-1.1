#include <stdio.h>
#include <time.h>

int main()
{	
	srand(time(NULL));
	int arr[100],i,x,j,n;

	for(i=1;i<=100;i++)
	{
		arr[i]=rand()%100+1;
	}	
	printf("%10s%13s\n","Element","Value");
	
	for (i=1;i<=100;++i)
	{                     
		printf("%7u%15d\n",i,arr[i]);       
	}		
	int deletedNumber,size;
	
	printf("/nplease enter what number you want to delete");
	scanf("%d",&deletedNumber);
	
	for(i=n-1;i<size-1;i++)
	{
		arr[i]=arr[i+1];	
	}
	if(deletedNumber>size+1)
	{
		printf("Wrong Number");
	}
	
}
