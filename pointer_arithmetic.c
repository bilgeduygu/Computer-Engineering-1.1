#include <stdio.h>
#include <stdlib.h>


void arraycpy(int *dest, int*source, int size)
{

	int i;
	for(i = 0; i < size; i++, dest++, source++)
	{
		*(dest) = *(source);
	}

}

void strcpy_(char *dest, char *source)
{
	for(; (*dest = *source) != '\0' ;source++, dest++);
}

void strcat_(char *dest, char *s1, char *s2)
{

	int i = 0;
	for(i = 0; *(s1+i) != '\0'; i++)
	{	
		*(dest+i) = *(s1+i);
	}
	for(; *(s2+i) != '\0'; i++)
	{	
		*(dest+i) = *(s2+i);
	}
	*(dest+i) = '\0';

}

void main()
{
	int array1[10];
	int array2[10];
	int i;
	int *r, *p, *q, *l;
	
	char string1[20] = "helloworld";
	char string2[20];
	
	strcpy_(string2, string1);
	printf("\n%s ", string2);
	
	
	
	
	/*
	p = array1;
	q = array2;
	for(i = 0; i < 10; i++)
	{
		p[i] = rand()%25;
	}
	
	arraycpy(q, p, 10);
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", array2[i]);
	}
	*/
}
