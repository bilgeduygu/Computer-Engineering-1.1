#include <stdio.h>

int linear_search(int blg[10],int n, int key)
{
	int pos=0;
	while(pos<n && blg[pos]!=key)
	{
		pos=pos+1;
	}
	if(blg[pos]!=key)
	{
		pos=-1;
	}
	return pos;
}
int main()
{
	int blg[10]={5,43,21,65,3,88,25,2,9,11};
	int n=sizeof(int);
	int key=65;
	printf("%d",linear_search(blg,n,key));
}
