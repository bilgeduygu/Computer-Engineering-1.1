#include <stdio.h>

int main() 
{
	int min=1;
	int max=500;
	int guess;
	char answer;
	int attempt=0;
	int C;
	int R;
	int L;

	printf("Please choose a number between 1 to 500,I can find your number up to 9 attempt");
	
    do{
    
        guess=(max-min)/2+min;
        printf("\nmy guess = %d\n",guess);
		printf("(C)yes,you found my number\n",C);
		printf("(R)no,go to right\n",R);
		printf("(L)no,go to left\n",L);
		scanf("%d %d %d",&C,&R,&L);
		scanf("%c",&answer);
		attempt=attempt+1;
		printf("\nattempt%d\n",attempt);
		
        if(answer=='R')
        {
            min=guess;
		}
        else if(answer=='L')
        {
            max=guess;	
		}
	}
    while(answer!='C');
    {
   		printf("\n\nYour number is %d !!!",guess);
	}
}

