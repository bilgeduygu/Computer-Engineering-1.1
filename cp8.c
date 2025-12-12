#include <stdio.h>

int main()
{
    int a;
	int b;
	int c=0;
    printf("Please enter a number");
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        a=a/10;
        c+=b;
    }
    printf("Sum of entered numbers: %d\n",c);
}
