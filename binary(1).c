#include <stdio.h>

int binary(int h,int l,int m,int x)
{
	

	while(h>l && m!=x)
	{
		m=(h+l)/2;
		if(x>m)
		{
			l=m;
		}
		else if(x<m)
		{
			h=m;
		}
		printf("%d\n",m);
	}
	
}
int main()
{
	int i,x;
	int high=100;
	int low=0;
	int mid=(high+low)/2;
	int arr[100];
	for(i=0;i<100;i++)
	{
		arr[i]=i+1;
	}
	scanf("%d",&x);

	binary(high,low,mid,x);
}
