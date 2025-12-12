#include <stdio.h>

int main()
{
	int a[2][2];
	int i,j;
	for(i=0;i<2;i++)
	
	{
		for(j=0;j<2;j++)
		{
			printf("enter a(%d,%d)",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int b[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter b(%d,%d)",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	int c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\n",c[i][j]);
		}
	}	
}
