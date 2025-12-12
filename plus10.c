#include <stdio.h>

int main()
{
	int result;
	int num;
	int a;
	
	printf("please enter a number");
	scanf("%d",&a);
	
	result = plus10(a);
	printf("result is = %d",result);

}	
int plus10(int num)
{
	return num+10;
}
