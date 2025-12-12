#include <stdio.h>

int main()
{
	int a;
	int b;
	a=1;
	b=1;
	while(a<=10)
	{
		 b=0;
		while(b<10)
		{
			b=b+1;
			printf("%d x %d=%d\n",a,b,a*b);	
		}
		a=a+1;
	}
}
