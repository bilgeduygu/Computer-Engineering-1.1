#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int a[100],i,x,j,n;

	for(i=1;i<=100;i++)
	{
		a[i]=rand()%100+1;
	}	
	printf("%10s%13s\n","Element","Value");
	
	for (i=1;i<=100;++i)
	{                     
		printf("%7u%15d\n",i,a[i]);       
	}		
	for(i=0 ; i<100 ; i++)
	{
		n=a[i];
		x=0;
        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {
                x=1;
            }
        }    
   		if(x==0)
   		{
    		printf("\n%d is prime",n);	
		}
	}
	return 0;
}
