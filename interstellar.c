#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int planet1(int x)
{
	srand(time(NULL));
	int i=0,hour1=0,y,n=rand()%10;
	printf("I choose a number from 1 to 10, try to find my number\n");

	while(n!=i)
	{
		scanf("%d",&i);
		if(i<n)
		{
			printf("increase your guess\n");
		}
		else if(i>n)
		{
			printf("decrease your number\n");
		}
		hour1=hour1+1;
		printf("\n(%d hour passed)\n",hour1);
	}
	printf("\n!!!Congratulations you found the number!!!\n");
	printf("****Which planet do you want to go to now****\n");
	scanf("%d",&y);

	if(x==y)
	{
		printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
		return 0;
	}
	else
	{
		if(y==2)
		{
			planet2(x);
		}
		if(y==3)
		{
			planet3(x);
		}	
		if(y==4)
		{
			planet4(x);
		}
		if(y==5)
		{	
			planet5(x);
		}
		if(y==6)
		{
			planet6(x);	
		}
		if(y==7)
		{
			planet7(x);
		}
	}
	
}
int planet2(int x)
{
	srand(time(NULL));
	int i=0, hour2=0,z,n=rand()%20+1,m=rand()%2;
	printf("I choose a number from 1 to 20, try to find my number but maybe I can't help you maybe I can\n");
	while(n!=i)
	{
		scanf("%d",&i);
		if(n<i)
		{
			if(m==1)
			{
				printf("decrease your guess");
			}
			if(m==0)
			{
				printf("increase your guess");
				m=rand()%2;
			}
		}
		if(n>i)
		{
			if(m==1)
			{
				printf("increase your guess");
			}
			if(m==0)
			{
				printf("decrease your guess");
				m=rand()%2;
			}
		}
		if(n==i)
		{
			printf("!!Congratulations You Found The Number!!\n");
			printf("****Which planet do you want to go to now****");
			scanf("%d",&z);
			if(x==z)
			{
				printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
				return 0;
			}
			else
			{
				if(z==1)
				{
					planet1(x);
				}
				if(z==3)
				{
					planet3(x);
				}
				if(z==4)
				{
					planet4(x);
				}
				if(z==5)
				{
					planet5(x);
				}
				if(z==6)
				{
					planet6(x);
				}		
				if(z==7)
				{
					planet7(x);
				}
			}
		}
		hour2=hour2+1;
		printf("(%d hour passed)\n",hour2);
	}
}
int planet3(int x)
{
	srand(time(NULL));
	int value,a,sum=0,n=rand()%17+7,hour3=0;
 
	printf("Try to reach %d but you can just 2,3,5\n",n);
	
 	while(sum!=n)
 	{ 
 		sum=0;
 		while(sum<n)
		{ 
			scanf("%d",&value);
			if(value==2)
			{
    			sum=sum+value;	
			}
			if(value==3)
			{
	  			sum=sum+value;	
			}
			if(value==5)
			{
				sum=sum+value;
			}
    		if(sum==n)
			{
				printf("!!Congratulations You Reach The Number!!\n");
				printf("****Which planet do you want to go to now****\n");
				scanf("%d",&a);
				if(x==a)
				{
					printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
					return 0;
				}
				else 
				{
					if(a==1)
					{
						planet1(x);
					}
					if(a==2)
					{
						planet2(x);
					}
					if(a==4)
					{
						planet4(x);
					}
					if(a==5)
					{
						planet5(x);
					}
					if(a==6)
					{
						planet6(x);
					}
					if(a==7)
					{
						planet7(x);
					} 			
				}					
			}
		}
		n=rand()%23;
		printf("you entered large number, try again %d\n",n);
		hour3=hour3+1;
		printf("(%d hour passed)\n",hour3);
	}
}
int planet4(int x)
{
	srand(time(NULL));
	int b,i,hour4=0,won=0,won_=0;
	for(i=1;i<4;i++)
	{	
		int n=rand()%6+1;
		printf("computer rolled the dice %d\n",n);
		
		int m=rand()%6+1;	
		printf("user rolled the dice%d\n",m);
		if(m<n)
		{
			won=won+1;
			printf("********computer won %d. time*********\n",won);
			
		}
		else if(n<m)
		{
			won_=won_+1;
			printf("*******user won %d. time*******\n",won_);
		}
		else if(m==n)
		{
			printf("DRAW\n");
		}
		hour4=hour4+1;
		printf("\n(%d hour passed)\n",hour4);
	}	
	if(won>won_)
	{
		printf("!!FAIL!!Computer won the game!!\n");
	}
	else if(won_>won)
	{
		printf("!!CONGRATULATIONS!!User won the game!!\n");
	}
	else if(won==won_)
	{
		printf("There is no winner ):");
	}
	printf("****Which planet do you want to go to now****\n");
	scanf("%d",&b);
	if(x==b)
	{
		printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
		return 0;
	}
	else
	{
		if(b==1)
		{
			planet1(x);
		}
		if(b==2)
		{
			planet2(x);
		}
		if(b==3)
		{
			planet3(x);
		}
		if(b==5)
		{
			planet5(x);
		}
		if(b==6)
		{
			planet6(x);
		}
		if(b==7)
		{
			planet7(x);
		}
	}
	
}
int planet5(int x)
{
	srand(time(NULL));
	int rock=1,paper=2,scissor=3,i,m,hour5=0,won_=1,won=1,c;
	printf("Play rock,paper,scissor with computer");
	while(won_>=1)
	{
		for(i=1;i<4;i++)
		{
			int n=rand()%3+1;
	
			printf("\nComputer made its move\n",n);
			printf("Your turn\n");
			scanf("%d",&m);
			if(m==1)
			{
				if(n==1)
				{
					printf("draw\n");
				}
				else if(n==2)
				{
					won=won+1;
					printf("computer won this time\n",won);
				}
				else if(n==3)
				{
					won_=won_+1;
					printf("user won this time\n",won_);
				}
				hour5=hour5+1;
				printf("(%d hour is passed)",hour5);
			}
			if(m==2)
			{
				if(n==1)
				{
					won_=won_+1;
					printf("user won this time\n",won_);				
				}
				else if(n==2)
				{
					printf("draw\n");			
				}
				else if(n==3)
				{
					won=won+1;
					printf("computer won this time\n",won);
				}
				hour5=hour5+1;
				printf("(%d hour is passed)",hour5);
			}
			if(m==3)
			{
				if(n==1)
				{
					won_=won_+1;
					printf("user won this time\n",won_);	
				}
				else if(n==2)
				{
					won=won+1;
					printf("computer won this time\n",won);				
				}
				else if(n==3)	
				{
					printf("draw\n");	
				}
				hour5=hour5+1;
				printf("(%d hour is passed)",hour5);			
			}
		}
		if(won>won_)
		{
			printf("\n!!FAIL!!COMPUTER WON THE GAME TRY AGAIN\n");
		}
		if(won_>won)
		{
			won_=0;
			printf("!!CONGRATULATIONS!!YOU WON THE GAME\n");
		}
		if(won_==won)
		{
			printf("THERE IS NO WINNER TRY AGAIN\n");
		}		
	}
	printf("****Which planet do you want to go to now****\n");
	scanf("%d",&c);
	if(x==c)
	{
		printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
		return 0;
	}
	else
	{
		if(c==1)
		{
			planet1(x);
		}
		if(c==2)
		{
			planet2(x);
		}
		if(c==3)
		{
			planet3(x);
		}
		if(c==4)
		{
			planet4(x);
		}
		if(c==6)
		{
			planet6(x);
		}
		if(c==7)
		{
			planet7(x);
		}
	}
	
}
planet6(int x)
{
	printf("Guess the digit of the number(0 or 1)");
	int hour6=0,d;
	int correct=0;
	srand(time(NULL));
	int m=rand()%255;
	while(correct<3)
	{
		int a=1,y,i,t;
		int binary=0;
    	int part=0,l=1;
    	while(m!=0)
    	{
        	part=m%2;
    	    m/=2;
    	    binary+=part*l;
    	    l*=10;
    	}
    	do
		{
    	    m=m/10;
    	    a++;
    	}
    	while(m>=10);
		int x=rand()%a+1;
    
   		for(i=0;i<x;i++)
		{
			y=m%10;
	    	m=m/10;
		}
		printf("\nwhat is the digit %d\n",x);
		scanf("%d",&t);
		if(t==y)
		{
			printf("Correct\n",correct);
			correct=correct+1;
		}
		else if(t!=y)
		{
			printf("Try Again\n");
		}
	hour6=hour6+1;
	printf("(%d hour is passed)\n",hour6);			
	}
	printf("****Which planet do you want to go to now****\n");
	scanf("%d",&d);
	if(x==d)
	{
		printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
		return 0;
	}
	else
	{
		if(d==1)
		{
			planet1(x);
		}
		if(d==2)
		{
			planet2(x);
		}
		if(d==3)
		{
			planet3(x);
		}
		if(d==4)
		{
			planet4(x);
		}
		if(d==5)
		{
			planet5(x);
		}
		if(d==7)
		{
			planet7(x);
		}
	}

}
int planet7(int x)
{
	int w,sum,i,y=1,f;
	srand(time(NULL));
	int n=rand()%21+10;
	int m=rand()%21+10;

    clock_t t; 
    t = clock();
    t = clock() - t; 
    	 
    float seco= ((float)t)/CLOCKS_PER_SEC;
    
    while(y==1)
    {
    	printf("%d*%d\n",n,m);
	    scanf("%d",&w);		
		int sum=n*m;        
	    if(w==sum)
	    {
	    	y=0;
		}
		n=rand()%21+10;	
		m=rand()%21+10;
		if(w!=sum)
		{
			printf("fail try again\n");
		}
	}  
	while(1) 
    { 
        if(getchar()) 
        break; 	
    }    
     
    printf("You found the answer %lf seconds\n", seco); 
	printf("****Which planet do you want to go to now****");
	scanf("%d",&f);
	if(x==f)
	{
		printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
		return 0;
	}
	else 
	{
		if(f==1)
		{
			planet1(x);
		}
		if(f==2)
		{
			planet2(x);
		}
		if(f==3)
		{
			planet3(x);
		}
		if(f==4)
		{
			planet4(x);
		}
		if(f==5)
		{
			planet5(x);
		}
		if(f==6)
		{
			planet6(x);
		}
	}
}
int main()
{
	int x,e,lostHour;
	srand(time(NULL)); 
	x=rand()%7+1;
	printf("%d",x);

	printf("!!!!!EARTH IS IN DANGER,WHICH PLANET WOULD YOU LIKE TO GO TO SAVE THE EARTH!!!!!\n");
	scanf("%d",&e);
	if(x==e)
	{
		printf("!*****CONGRATULATIONS YOU FOUND THE HABITABLE PLANET*****!");
		return 0;
	}
	if(e==1)
	{	
		lostHour=720;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet1(x);
	}
	if(e==2)
	{
		lostHour=5040;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet2(x);
	}
	if(e==3)
	{
		lostHour=6480;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet3(x);
	}
	if(e==4)
	{
		lostHour=17280;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet4(x);
	}
	if(e==5)
	{
		lostHour=14640;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet5(x);
	}
	if(e==6)
	{
		lostHour=13920;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet6(x);
	}
	if(e==7)
	{
		lostHour=18960;
		printf("You lost %d hour until you came to this planet\n",lostHour);
		planet7(x);
	}
}
