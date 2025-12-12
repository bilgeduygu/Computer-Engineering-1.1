#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int a,y,i;
 	int z=rand()%255;
    a=1;
    do
	{
        z=z/10;
        a++;
    }
    while(z>=10);

	int x=rand()%a;
	for(i=0;i<x;i++)
	{
		y=z%10;
        z=z/10;
	}
	printf("%d",y);	
}
