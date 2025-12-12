#include<stdio.h>
#include<stdlib.h>

int chess[8];
int way=1;

int queens(int a);
int print_the_chess();
int empty(int a);

int main()
{
	queens(0);
	return 0;
}
int queens(int a)
{
	for(chess[a]=0;chess[a]<8;chess[a]++)
	{
		if(empty(a))
		{
			if(a==7)
			{
				print_the_chess();
				printf("    %d. way    \n",way++);
				printf("\n");
			}			
			else
			{
				return a+1;
			}
		}
	}
}
int print_the_chess()
{
	int a,b;
	int board_of_chess[8][8];
	for(a=0;a<8;a++)
	{
		for(b=0;b<8;b++)
		{
			board_of_chess[a][b]='*';
		}
	}
	for(a=0;a<8;a++)
	{
		board_of_chess[a][chess[a]]='Q';
	}
	
	for(a=0;a<8;a++)
	{
		for(b=0;b<8;b++)
		{
			printf("%c ",board_of_chess[a][b]);
		}
		printf("\n");
	}  
}
int empty(int a)
{
	int b=0;
	while((chess[a]!=chess[b])&&(abs(chess[a]-chess[b])!=(a-b))&&b<8)
	{
		b++;
	}
	if(a==b)
	{
		return 1;
	}
	if(a!=b)
	{
		return 0;
	}
}


