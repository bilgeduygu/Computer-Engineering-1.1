#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int arr[100];
	int i,f,j,n;
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0 ; i<size ; i++)
	{
		arr[i]=rand()%100+1;
	}
	for(i=0 ; i<size ; i++)
	{
		printf("element %d:%d\n",i,arr[i]);
	}
	for(i=0;i<100;i++)
	{	
		n=arr[i];
		f=0;
        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {
                f=1;
                break;
            }
        }    
	}
    if(f==0)
    {
    	printf("\n%d is prime",n);
	}
	return 0;
}
