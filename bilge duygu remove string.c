#include <stdio.h>


int main()
{
    char string[100];
	char number[50];
    int sign,i,x,y,z,result,a=1;

    printf("Please enter string:\n");
    scanf("%s",&string);
	
	printf("Please enter the number to delete:\n");
	scanf("%s",&number);
	
	int q=1;
	int counter=0;
	while(q==1)
	{
		for (x = 0; number[x] != '\0'; x++);
		{
		    for (y = 0 , z = 0; string[y] != '\0' && number[z] != '\0'; y++)
		    {
		        if (string[y] == number[z])
		        {
		            z++;
		        }
		        else if(string[y] != number[z])
		        {
		            z=0;
		        }
		    }
		    if (z==x)
		    {
		        result=y-z;
		    }
		    else if(z!=x)
		    {
		        return 0;
		    }	
		}
		if (result != -1)
	    {
	   		for (x = 0; number[x] != '\0'; x++);
			{
				for (i = result; string[i] != '\0'; i++)
				{
				    string[i] = string[i + x];
			    }
			}
			counter=counter+1;
	        printf("string without deleted number (step %d):\n%s\n",counter, string);
		}
		else
	    {
	 		printf("Wrong Number Entered");
	 		q=0;
		}
	}
	return 0;
}
