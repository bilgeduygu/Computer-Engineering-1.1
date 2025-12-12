#include <stdio.h>
int main(){
	int a,b,i,j;
	printf("Enter an integer for start value");
	scanf("%d",&a);
	printf("Enter an integer for end value");
	scanf("%d",&b);
	
	if(a>b){
		printf("error");
		int c;
		c=a;
		a=b;
		b=c;
	}
	
	for(j=a;j<=b;j++){
			for(i=1; i<=10; i++)
			{
				printf("%d * %d = %d\n",j,i,j*i);  
			}	
	}
	return 0;
}


