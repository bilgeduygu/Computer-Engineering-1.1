#include <stdio.h>

int binary_search(int blg[10],int n,int key)
{
	int low=0;
	int high=n-1;
	int pos=(low+high)/2;
	
	while(low<high && blg[pos] !=key)
	{
		if(blg[pos]<key)
		{
			low=pos+1;
		}
		else 
		{
			high=pos-1;
		}
		pos=(low+high)/2;
		printf("%d ",pos);
	}
	if(blg[pos]!=key)
	{
		pos=-1;
	}
	return pos;
}
int main()
{
	int blg[10]={1,2,3,4,5,6,7,8,9,10};
	int key=8;
	int n=sizeof(blg)/sizeof(int);
	printf("%d",binary_search(blg,10,key));
}
