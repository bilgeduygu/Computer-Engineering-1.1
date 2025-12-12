#include <stdio.h>

int linear_search(int blg[10],int n,int key)
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
	int blg[10]={5,32,45,12,2,7,1,10,98,3};
	int key=564;
	
	int n=sizeof(blg);
	
	printf("%d",linear_search(blg,n,key));
}
