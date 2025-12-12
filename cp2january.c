#include <stdio.h>
int total;
total=0;

int main(){
    int day, month, year;
    scanf("%d.%d.%d",&day,&month,&year);
    int i;
    for (i=1;i<month;i++)
	{
        if (i<=7)
		{
            if(i==2)
			{
                total=total+28+leap_year(year);
            }
            else if (i%2==0)
			{
                total=total+30;
            }
            else
			{
                total=total+31;
            }
        }
        else
		{
            if(i%2==0)
			{
                total=total+31;
            }
            else
			{
                total=total+30;
            }
        }
    }
    total+=day;
    printf("%d.%d.%d date %d day of %d",day,month,year,total);
}
int leap_year(int year)
{
    if( year%4==0 && year%100!=0 || year%400==0 ){
        return 1;
}
    else {
        return 0;
}
}
