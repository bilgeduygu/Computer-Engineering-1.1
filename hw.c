#include <stdio.h>

int main()
{
	int i;
	int a,b,c,d,e;
	int max;
	for(i=0;i<5;i++)
	{
	 printf("\nenter the first number");
	 scanf("%d",&a);
	 
	 printf("\nenter the second number");
	 scanf("%d",&b);
	
	 printf("\nenter the third number");
	 scanf("%d",&c);
	 
	 printf("\nenter the fourth number");
	 scanf("%d",&d);
	  
	 printf("\nenter the fifth number");
	 scanf("%d",&e);
		{
		
			if(a>=max)
			{	
				printf("max of the entered numbers %d",max);
				scanf("%d",&a);
			}
			else if(b>=max)	
			{
				printf("max of the entered numbers %d",max);
				scanf("%d",&b);
			}
			else if(c>=max)
			{
				printf("max of the entered numbers %d",max);
 				scanf("%d",&c);
			}
			else if(d>=max)
			{
				printf("max of the entered numbers %d",max);
				scanf("%d",&d);
			}
			else if(e>=max)
			{
				printf("max of the entered numbers %d",max);
				scanf("%d",&e);
			}
			else if(a<0)
			{
				printf("the number you entered is less than zero");
			}
		}
	}	
}
