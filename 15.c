
#include <stdio.h>
 
int main()
{
	//Sort the array in ascending order
    int i, j, a, n, number[30];
 	printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);

	}
    
	for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("Output\n");
    for (i = 0; i < n; i++){
        printf("%d\n", number[i]);}       
    return 0;
}
