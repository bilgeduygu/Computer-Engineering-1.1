#include <stdio.h>
#include <math.h>

float probability(int a[],int b[])
{
	float P1,P2;
	P1 = 1.0 * 1.0 / (1 + 1.0 * pow(10, 1.0 * (a[0] - b[0]) / 400));
	P2 = 1.0 * 1.0 / (1 + 1.0 * pow(10, 1.0 * (b[0] - a[0]) / 400));
	
	printf("%f\n",P1);
	printf("%f\n",P2);
	
	if(P1<P2)
	{
		return P2;
	}
	if(P2<P1)
	{   
		return P1;
	}
}
float rating(int a[],int b[],int K1,int K2,float P)
{   
    float x,y;

    if(a[0]>b[0])
	{
		a[0] = a[0] + K1*(1 - P); 
		b[0] = b[0] + K2*(0 - (1-P)); 		
	}
	if(a[0]<b[0])
	{
		a[0] = a[0] + K2*(1 - P); 
		b[0] = b[0] + K1*(0 - (1-P)); 	
	}
     
     x = a[0];
     y = b[0];
     
     printf("1:%f\n",x);
     printf("2:%f",y);
 }
int calculateK(int a[],int b[],int c[])
{
	int K;
	
	if(b[2]<30)
	{
		K=40;
	}
	else if(b[2]>30 && c[0]<2400)
	{
		K=20;
	}
	else if(b[2]>30 && c[0]>2400)
	{
		K=10;
	}
	else if(c[0]<2300 && a[1]<18)
	{
		K=40;
	}
	return K;
}
int main()
{
	int i;
	float rate,prob;
	int a[2][3];
	int ck1,ck2;
	
	printf("enter rating1,age1,played games1\n");

    for(i=0;i<3;i++)
    {
    	scanf("%d",&a[2][3]);
	}
	
	printf("enter rating2,age2,played games2\n");

	for(i=0;i<3;i++)
    {
    	scanf("%d",&b[2][3]);
	}
	
	prob = probability(a[2][3],b[2][3]);
	
	printf("probability=%f\n",prob);
	
	
	ck1 = calculateK(a[2][3], a[2][3], a[2][3]);
	ck2 = calculateK(b[2][3], b[2][3], b[2][3]);
	
	rate=rating(a[2][3],b[2][3],ck1,ck2,prob);
	
	return 0;
	
}

