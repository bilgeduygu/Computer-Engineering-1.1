#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*int fill_deck(int **cards)
{
	int i,j,r=4,c=13;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cards[i][j] = rand()%14+1;			
		}	
	}
}*/
int choose(int cards[])
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<8;i++)
	{
		cards[i]=rand()%14+1;
		printf("%d,",cards[i]);
	}
	printf("\n");
}
int bubble_sort(int cards[],int size)
{
	int i,j;
	int temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(cards[j]>cards[j+1])
			{
				printf("*1*");
				temp=cards[j];
				cards[j]=cards[j+1];
				cards[j+1]=temp;
				printf("*2*");
			}
		}
	}
}
int main()
{
	int i,j;
	int cards[i];
	int size=8;

		
	//fill_deck(&cards[0]);
	choose(cards[0]);
	bubble_sort(cards[0],size);
	
	for(i=0;i<size;i++)
	{
		printf("2=%d,",cards[i]);
	}
}
