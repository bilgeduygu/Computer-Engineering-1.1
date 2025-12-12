#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int a[50];
	int b[50];
	int i;
	for(i=1;i<=50;i++)
	{
		a[i]=rand()%50+1;
	}
	printf("%10s%13s\n","Element(a[50])","Value(a[50])");
		
	for(i=1;i<=50;i++)
	{
		printf("%7u%15d\n",i,a[i]);       
	}
	for(i=1;i<=50;i++)
	{
		b[i]=rand()%50+1;
	}
	printf("%10s%13s\n","Element(b[50])","Value(b[50])");	
	for(i=1;i<=50;i++)
	{
		printf("%7u%15d\n",i,b[i]);       	
	}
	int count=0,j,size;
	a[i];
	b[j];
	for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i]==b[i])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in these two array = %d", count);
    return 0;
}
