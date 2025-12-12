#include<stdio.h> 

int print_the_chess_board(int board[8][8]);
int form_of_row_and_collumn(int board[8][8],int row,int column);
int unravel(int board[8][8],int column);
int solve();

int main() 
{ 
    solve();
    return 0; 
} 
int print_the_chess_board(int board[8][8]) 
{ 
	int x,y;
	char a='.',b='Q';
    for (x=0;x<8;x++) 
    { 
        for (y=0;y<8;y++) 
        {
        	if(board[x][y]==0)
        	{
        		board[x][y]=a;
			}
			else 
			{
				board[x][y]=b;
			}
            printf(" %c ", board[x][y]); 	
		}
        printf("\n"); 
    } 
} 
int form_of_row_and_collumn(int board[8][8],int row,int column) 
{ 
    int x,y; 
    for(x=0;x<column;x++) 
    {
 		if(board[row][x]==1) 
        {
            return 0; 	
		}      	
	}
       
    for(x=row, y=column; x>=0 && y>=0; x--, y--) 
    {
        if (board[x][y]==1) 
        {
            return 0; 
		}
	}
    for(x=row, y=column; y>=0 && x<8; x++,y--) 
    {
        if(board[x][y]==1)
		{
            return 0; 			
		}     	
	}
	return 1;	
} 
int unravel(int board[8][8],int column) 
{ 
	int x;
    if (column>=8) 
    {
    	return 1; 	
	}
    for (x= 0;x< 8;x++) 
    { 
        if (form_of_row_and_collumn(board,x,column)) 
        { 
            board[x][column]=1; 
            if (unravel(board,column+1))
			{
                return 1; 	
			} 
            board[x][column] = 0;
        } 
    } 
    return 0; 
} 
int solve() 
{ 
	int x,y;
    int board[8][8];
    for(x=0;x<8;x++)
    {
    	for(y=0;y<8;y++)
    	{
    		board[x][y]=0;
		}
	}
    if (unravel(board,0)==0) 
    { 
      return 0; 
    }  
    print_the_chess_board(board); 
    return 1; 
}

