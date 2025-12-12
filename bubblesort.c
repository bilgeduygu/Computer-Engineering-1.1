#include <stdio.h>
#include <time.h>

int bubbleSort(int deck[], int size)
{
    int temp;
    int i, j, k;
    int x;

    for (i=1; i<size; i++)
    {
        for (j=0; j<size-i; j++)
        {
            if(deck[j] > deck[j+1])
            {
               	printf("Do you want to swap (yes=1 || no=0)");
            	scanf("%d",&x);
            	if(x==1)
            	{
            		temp = deck[j];
	                deck[j] = deck[j+1];
	                deck[j+1] = temp;
            	    for(k=0;k<size;k++)
					{
						printf("%d,",deck[k]);
					}
					printf("\n");
				}
				else if(x==0)
				{
				
				}
            }
        }
    }
    
}

int main()
{
	int size=8;
	int a[4][13];
	int r=4,c=13,i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j] = j+1;
		}
	}

	int deck[8];
	srand(time(NULL));
	
	for(i=0;i<8;i++)
	{
		r = rand()%4;
		c = rand()%13;
		deck[i]=a[r][c];
		
		printf("%d,",deck[i]);
	}
	printf("\n");
	bubbleSort(deck,size);	
}
