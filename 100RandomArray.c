#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int arr[100];
	int i;
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for(i=1 ; i<=size ; i++)
	{
		arr[i]=rand()%100+1;
		printf("number %d:%d\n",i,arr[i]);
	}

}

