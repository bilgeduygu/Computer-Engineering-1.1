#include <stdio.h>

int main()
int number;
int factorial(int number);
{

 	if(number <= 1) return 1;

  	return number * factorial(number - 1);
}

int main()
{

  int number = 0;
  printf("please enter a number");
  scanf("%d",&number);
  
  printf("%d",factorial(number));
}
