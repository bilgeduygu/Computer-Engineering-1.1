#include<stdlib.h>
#include<stdio.h>
 
 int main(){

	int a=654321;
	int counter=0;
	while(a!=0){
		
		printf("a is %d \n",a);
		a=a/10;
		counter=counter+1;
	}
	
	printf("Number has %d digits \n",counter);
	system("Pause");
	return 0; 	
}
