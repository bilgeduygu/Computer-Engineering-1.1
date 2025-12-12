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
	int c[100],j,k;
	for(i=0;i<50;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<100;j++)
	{
		c[j]=b[j-50];
	}
	for(k=0;k<100;k++)
	{
		printf("%10s%13s\n","Element(c[100])","Value(c[100])");
	}
		printf("%7u%15d\n",i,c[i]);       
	
}
