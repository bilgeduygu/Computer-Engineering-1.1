#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y,z=0;
    srand(time(NULL));
    int x=rand()%9;
    printf("Please enter a number,I will calculate the sum of digits\n");
    scanf("%d",&x);
    while(x)
    {
        y=x%10;
        x=x/10;
    }
    printf("Sum of entered numbers: %d\n",z);
}

