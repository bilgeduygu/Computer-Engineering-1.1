#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_r_c(int**chess,int*p,int N,int M)
{
	int i,j;
    int times=0;
    for( i=0; i<N; i++)
    {
        times=0;
        for( j=0; j<M; j++)
        {
            if(chess[i][j] == 1)
                times++;

        }
        if( times != 1)
        {
            *p=1;
            return 1;
        }
    }
    for( j=0; j<M; j++)
    {
        times=0;
        for( i=0; i<N; i++)
        {
            if(chess[i][j] == 1)
                times++;
        }
        if( times != 1)
        {
            *p=1;
            return 1;
        }
    }
    *p=0;
    return 0;
}
int main()
{
    int N,M;
    printf("Give the number of rows: \n");
    scanf("%d",&N);
    printf("Give the number of columns: \n");
    scanf("%d",&M);
    int**chess = malloc(N*sizeof(int));
    int i,j,ch,k;
    int*ptr;
    ptr=&ch;
    if(chess==NULL)
    {
        printf("\nMemory cannot be allocated\n");
        return 1;
    }
    for(i=0; i<N; i++)
    {
        if((chess[i] = malloc(M*sizeof(int)))==NULL)
        {
            printf("\nMemory cannot be allocated\n");
            return 1;
        }
    }
    for( i=0; i<N; i++)
        for( j=0; j<M; j++)
            chess[i][j]= 0;
    for( k=0; k<N; k++)
    {
        printf("Give the position of the %d queen\n",k+1);
        scanf("%d",&i);
        scanf("%d",&j);
        if(chess[i][j] == 1)
        {
            printf("You cant put 2 queens in the same place!!!\n" );
            return 0;
        }
        chess[i][j] = 1;
    }
    check_r_c(chess,ptr,N,M);
    if(ch == 0)
        printf("Solution is correct!");
    else
        printf("Solution is incorrect!");
    for( i=0; i<N; i++)
        free(chess[i]);
    free(chess);
}
