#include <stdio.h>

int plus10(double x)
{
	return x+10;
}
void avgPrinter(int numb1, int numb2)
{
	double result = (numb1+numb2)/2;
	printf("The avg of %d and %d is %lf \n",numb1,numb2,result );
	int numPlus = plus10(result);
	printf("Result + 10 = %d \n ",numPlus);
}
double avg(int a, int b)
{
return (a+b)/2.0;
}
int main()
{
	int number1 = 5; int number2 = 7; double result;
	result = avg(number1,number2);
	printf("average of %d and %d is %lf \n",number1,number2,avg(number1,number2));
	printf("average of numbers is : %lf \n",result);
	avgPrinter(number1,number2);
}

