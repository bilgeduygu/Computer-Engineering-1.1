#include<stdlib.h>
#include<stdio.h>


int main(){
	
	int a=5;
	/*
	while(a<5){			//Condition
		a= a+5;			//Statement
	}
	*/
	do{
		a = a+5;		//Statement
	}while(a<5);		//Condition
		
	printf("A is %d",a);	
	system("Pause");
	return 0;
}
