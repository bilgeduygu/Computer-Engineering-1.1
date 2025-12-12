#include <stdio.h>

int main()
{
    int x,y,z=0;
    
    printf("Please enter a number,I will calculate the sum of digits\n");
    scanf("%d",&x);
    while(x)
    {
        y=x%10;
        x=x/10;
        z=z+y;
    }
    printf("Sum of entered numbers: %d\n",z);
}

