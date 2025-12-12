#include<stdlib.h>
#include<stdio.h>

int main(){
	int i;
	int j;
	/*
	for(i=1;i<10;i++){// i++ i=i+1
		printf("i is %d\n",i);
	}
	printf("\n");
		
	for(j=10;j>0;j--){//j-- j=j-1
		printf("j is %d\n",j);
	}
	*/	
	for(i=1;i<=10;i++)
	{
		for(j=10;j>0;j--)
		{
			printf("j is %d\n",j);
		}
	}
	/*
	for(i=0;i<10;i++){
		
		for(j=0;j<10;j++){
			
				printf("%d%d\n",i,j);
		}
	}
	*/	
	system("Pause");
	return 0;	
}
