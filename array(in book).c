#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int size;
	int i;
	int arr[100];
	
	for(i=1;i<=100;i++)
	{
		arr[i]=rand()%100+1;
	}	
	printf("%10s%13s\n","Element","Value");
	
	for (i=1;i<=100;++i)
	{                     
		printf("%7u%15d\n",i,arr[i]);       
	}		
	int j,count=0; 
	for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}
 
