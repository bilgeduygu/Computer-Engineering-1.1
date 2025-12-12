# include <stdio.h>
 
int main()
{
     int exponential, i,result,base;
     double number;
 
     printf("please enter the base number");
     scanf("%lf", &number,&base);
 
     printf("please enter the exponential number");
     scanf("%d", &exponential);
     
	 for (i = 0; i < exponential; i++)
	 result=result*number;
     printf("result= %d\n",result);
}

