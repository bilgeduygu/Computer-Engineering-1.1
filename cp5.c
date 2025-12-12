#include <stdio.h>
 
 
int main ( )
{
	int i;
	int x;
	int y;
	int total=0;
 	printf("how many numbers will you enter"); 
	scanf("%d",x); 
	
    for(i=1; i<=x; i++)
    {
        printf("%d.number enter");
        scanf("%d",y);
        total+=y;
    }
 
    printf("average of numbers");
 	total/x;
    return 0;
}


         


