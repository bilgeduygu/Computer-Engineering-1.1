#include <stdio.h>
#include <math.h>

float probability(float rating1,float rating2)
{
	float P1,P2;
	P1 = (1.0 / (1.0 + pow(10, ((rating1 - rating2) / 400))));
	P2 = (1.0 / (1.0 + pow(10, ((rating2 - rating1) / 400))));
	
	if(P1<P2)
	{
		return P2;
	}
	if(P2<P1)
	{
		return P1;
	}
}
float rating(float rating1,float rating2,int K1,int K2,float P)
{   

	if(rating1>rating2)
	{
		rating1 = rating1 + K1*(1 - P); 
		rating2 = rating2 + K2*(0 - (1-P)); 		
	}
	if(rating1<rating2)
	{
		rating1 = rating1 + K2*(1 - P); 
		rating2 = rating2 + K1*(0 - (1-P)); 	
	}
     
     printf("1:%f\n",rating1);
     printf("2:%f",rating2);

}
float calculateK(float a[],float b[],float c[])
{
	int K;
	
	if(b[]<30)
	{
		K=40;
	}
	else if(b[]>30 && c[]<2400)
	{
		K=20;
	}
	else if(b[]>30 && c[]>2400)
	{
		K=10;
	}
	else if(c[]<2300 && a[]<18)
	{
		K=40;
	}
	return K;
}
int main()
{
	float rating1,rating2,prob,age1,age2,player1,plyer2;
	printf("enter rating1\n");
	scanf("%f",&array[0];
	
	printf("enter rating2\n");
	scanf("%f",&array[1]);
	
	prob = probability(rating1,rating2);
	printf("probability=%f\n",prob);
	
	int age, numberOfPlayedGames1,numberOfPlayedGames2;
	printf("enter player1 age\n");
	scanf("%d",&array[2]);
	
	printf("enter player2 age\n");
	scanf("%d",&array[3]);
	
	printf("enter the number 0f played games of player 1\n");
	scanf("%d",&array[4]);
	
	printf("enter the number of played games of player 2\n");
	scanf("%d",&array[5]);
	
	float ck1,ck2;
	ck1 = calculateK(array[2], array[4], array[0]);
	ck2 = calculateK(array[3], array[5], array[1]);
	
	float rate;
	rate=rating(rating1,rating2,ck1,ck2,prob);
	
	return 0;
	
}

