#include<stdlib.h>
#include<stdio.h>

int main(){
	int a,b;
	
	printf("enter the a variable");
	scanf(" %d",&a);
	printf("enter the b variable");
	scanf(" %d",&b);
	
	if(a>b){
		printf("a is greater than b\n");
	}
	else if(a==b){
		printf("a and b is equal\n");
		
		if(a>0){
			printf("a is positive\n");
		}
		else if(a<0){
			printf("a is negative\n");
		}
		else{
			printf("a is 0");
		}
	}
	else {
		printf("b is greater than a\n");
	}
	system("Pause");
	return 0;
}
