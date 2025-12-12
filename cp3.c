#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	int i;
	int total;
	int number;
	int average;
	printf("kaç sayýnýn ortalamasý alýnsýn");
	scanf("%d",&n);
	for (i=1 ; i<=n;i++)
	{
	number=number+i;
	total=total+i;
	average=total/number;
	printf("sayýlaýrn toplamý=%d",total);
	printf("sayilarýn ortalamasý=%d",average);
	}
	getch();
}
