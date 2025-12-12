#include <stdio.h>

int changeTheValue(int *a,int *b)
{
	int val=*a;
	*a=*b;
	*b=val;
}
int main()
{
	int x=7;
	int y=14;
	changeTheValue(&x,&y);
	printf("%d=x  %d=y",x,y);
}
