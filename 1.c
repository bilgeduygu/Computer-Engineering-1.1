 #include<stdio.h>
 #include<stdlib.h>
 
 int main(){
 	
 	float a,b,c;//a b and c is defined
 	
 	printf("Please give the first number\n");
 	scanf(" %f",&a);
 	/*
	 in this part we are taking an input from the user.
	 for int we use 	%d
	 for float we use 	%f
	 for double we use 	%lf
	 for char we use	%c
	 */
 	printf("Please give the second number\n");
 	scanf(" %f",&b);
 	c=a/b;
 	printf("Result is %f\n",c);
 	
	char ch;
	printf("Enter a character\n");
	scanf(" %c",&ch);
	
	printf("character c is %c\n",ch);
	 	
 	system("Pause");
 	return 0;
 }
