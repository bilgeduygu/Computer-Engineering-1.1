#include "stdio.h"
#include "stdbool.h"
#include <math.h>

#define BOARDSIZE 8

enum CellType { Empty   , Pawn , Bishop  , Knight  , Rook , Queen  , King};
typedef enum CellType CellType;

char ChessPieces[] = { '.', 'p', 'B', 'N','R','Q','K' };

typedef  CellType ChessBoard[BOARDSIZE][BOARDSIZE];
/*
ChessBoard initialBoard = { { Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook},
							{ Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn},
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty},
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty}, 
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty}, 
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty}, 
							{ Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn,Pawn},
							{ Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook}
};
*/






void printCell(CellType cell)
{
	printf("%c ", ChessPieces[cell]);

}

void printRow(ChessBoard cb, int row)
{
	int col;
	printf("%d ", row + 1);
	for (col = 0; col < BOARDSIZE; ++col)
	{
		printCell(cb[row][col]);
	}
	printf("\n");
}

void printChessBoard(ChessBoard a)
{
	int r;
	printf("  A B C D E F G H\n");

	for (r = 0; r < BOARDSIZE; ++r)
	{
		printRow(a, r);
	}
}


bool rookMove(int r, int c, int rr, int rc)
{
	if(r == rr || c == rc)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool bishopMove(int r, int c, int br, int bc)
{
	if(abs(br-r) == abs(bc-c))
		return true;
	return false;
}
bool queenMove(int r, int c, int qr, int qc)
{
	return bishopMove(r,c,qr,qc) || rookMove(r,c,qr,qc);
}
bool KnightMove(int r, int c, int kr, int kc)
{
	if((abs(kr-r) == 1 && abs(kc-c) == 2) || (abs(kr-r) == 2 && abs(kc-c) == 1))
		return true;
	else
		return false;
	
}

void main()
{
	printChessBoard(initialBoard);
	return;
	ChessBoard initialBoard = { { Empty,Queen,Empty,Empty,Empty,Empty,Queen,Empty},
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty},
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Queen},
							{ Queen,Empty,Empty,Queen,Empty,Empty,Empty,Empty}, 
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty}, 
							{ Empty,Queen,Empty,Empty,Queen,Empty,Empty,Empty}, 
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Empty},
							{ Empty,Empty,Empty,Empty,Empty,Empty,Empty,Queen}
};
}


