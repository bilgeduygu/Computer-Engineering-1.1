#include <stdio.h>

#define suits 4
#define faces 13
#define cards 52


void shuffle( int deck[][faces])
{
	int  i = 0;
	int row, col;
	for(i = 1; i <= cards; i++)
	{
		do
		{
			row = rand()%suits;
			col = rand()%faces;
		}
		while(deck[row][col] != 0);
		deck[row][col] = i;
	}
}



void deal(int deck[][faces], char* suitz[], char* facez[])
{
	int i, row, col;
	
	for(i = 1; i <= cards; i++)
	{
		for(row = 0; row < suits ; row++)
		{
			for(col = 0; col < faces; col++)
			{
				if(deck[row][col] == i)
				{
					if(i%2 == 0)
					{
						printf(" %s %s \t",suitz[row], facez[col] );
					}
					else
					{
						printf(" %s %s \n",suitz[row], facez[col] );
					}
					
				}
				
			}
		}
	
	}
	
	
	
}



void main()
{
	int i, j ;
	char *suitz[] = {"kupa", "karo", "sinek", "maca"};
	char *facez[] = {"as", "iki", "uc", "dort", "bes", "alti", 
				   "yedi", "sekiz", "dokuz", "on", "vale", "kiz", 						"papaz" };
				   
	int deck[suits][faces] = {0};
	shuffle(deck);
	
	deal(deck, suitz, facez);	
	
}
