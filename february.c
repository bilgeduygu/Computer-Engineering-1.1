#include <stdio.h>

int main()
{

	int i;
	int total;
	int year=365;

	for(i=1;i<13;i++)
	{
		int leap_year(int year);
		int day;
		int month;
		int january=31;
		int february=28+leap_year(year);
		int march=31;
		int april=30;
		int may=31;
		int june=30;
		int july=31;	
		int august=31;
		int september=30;
		int october=31;
		int november=30;
		int december=31;
		
		total=total+month;
		printf("please enter year,day and month");
		scanf("%d",&year,&day,&month);
	}
	int leap_year(int year);
	{
		((year%4==0) && (year%100!=0) || (year%400==0));
	}

	
}
