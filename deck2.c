#include <stdio.h>
#include <stdlib.h>
#define SUITS 4
#define FACES 13
#define CARDS 52


void shuffle(int deck[][FACES])
{
	int i, row, column;
	for(i = 1; i <= CARDS ; i++ )
	{
		
		do
		{
			row = rand()%4;
			column = rand()%13;
		}while(deck[row][column] != 0);
		
		deck[row][column] = i;
	}
}

void print_deck(int deck[][FACES])
{
	int i, j;
	for(i = 0; i < SUITS ; i++ )
	{
		for(j = 0; j < FACES ; j++ )
		{
			printf(" %d", deck[i][j]);
		}
		printf("\n");
	}
}


void deal(int deck[][FACES], char *suits[], char*faces[])
{
	int i, row, col;
	for(i = 1; i <= CARDS; i++)
	{
		for(row = 0; row < SUITS; row++)
		{
			for(col = 0; col < FACES; col++)
			{
				if(i == deck[row][col] && i%2 == 0)
				{
					printf("%5s %-8s\n", suits[row], faces[col]);
				}
				else if(i == deck[row][col] && i%2 == 1)
				{
					printf("%5s %-8s\t", suits[row], faces[col]);
				}
			}
		}
	}

}

void main()
{

	int deck[SUITS][FACES] = {0};
	char *suits[SUITS] = {"kupa", "karo", "sinek", "maca"};
	char *faces[FACES] = {"as", "2", "3", "4", "5", "6", "7", "8", "9", "10", "vale", "kiz", "papaz"};
	
	shuffle(deck);
	//print_deck(deck);
	deal(deck, suits, faces);	
}
