#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000                                        //Do not edit this macro.

typedef struct{
	int film_id;
	char title[255];
	char description[1023];
	unsigned int release_year;
	char rental_duration;
	float rental_rate;
	unsigned char length;
	float replacement_cost;
	char rating[10];
	char last_update[30];
} RECORD_t, *RECORD;                                    //Do not edit this struct.

/* DECLARE YOUR FUNCTION PROTOTYPES HERE */
/* DECLARE YOUR FUNCTION PROTOTYPES HERE */
/* DECLARE YOUR FUNCTION PROTOTYPES HERE */

int main()
{
	printf("Please enter name of the film you want to find\n");
	RECORD rec = (RECORD)malloc(sizeof(RECORD_t)*MAX);  //Do not edit this line.
	FILE *file = fopen("data.txt", "rb");               //Do not edit this line.
	if (file == NULL) 
	{                                 //Do not edit this line.
		printf("Cannot open the file.\n");              //Do not edit this line.
		exit(0);                                        //Do not edit this line.
	}                                                   //Do not edit this line.
	fread(rec, sizeof(RECORD_t)*MAX, 1, file);          //Do not edit this line.
	fclose(file);                                       //Do not edit this line.

	/**************************/
	/* Your code starts here. */
	/**************************/
	sort(rec);
	printf("*****************************************************");
	list(rec);
	printf("*****************************************************");

    int length, i,b=0,c=0,d=0;
	char movie[25];
	scanf("%[^\n]s",movie);

    /* finding length of word */
    for (length=0; movie[length] != '\0'; length++);
	
    for (i=0 ; i<1000 && c!=-1; i++)
    {
    	for(b=0; b<length && d!=-1;)
    	{	
	        if (rec[i].title[b] == movie[b])
	        {
	            b++;
	        }
	        else if(rec[i].title[b] != movie[b])
	        {
	            d = -1;
	            b=0;
	        }
		}
		d=0;
		
		if(b==length)
		{
			c=-1;
		}
    }
 	i=i-1;
	
	list(rec);
    printf("ID: %d\n", rec[i].film_id);
	printf("TITLE: %s\n", rec[i].title);
	printf("DESCRIPTION: %s\n", rec[i].description);
	printf("RELEASE YEAR: %d\n", rec[i].release_year);
	printf("RENTAL DURATION: %d\n", rec[i].rental_duration);
	printf("RENTAL RATE: %f\n", rec[i].rental_rate);
	printf("REPLACEMENT COST: %f\n", rec[i].replacement_cost);
	printf("RATING: %s\n", rec[i].rating);
	printf("LAST UPDATE: %s\n", rec[i].last_update);
    
	/**************************/
	/* Your code ends here.   */
	/**************************/

	file = fopen("data.txt", "wb");                     //Do not edit this line.
	fwrite(rec, sizeof(RECORD_t)*MAX, 1, file);         //Do not edit this line.
	fclose(file);                                       //Do not edit this line.
	free(rec);                                          //Do not edit this line.
	return 1; 
}
void sort(RECORD rec)
{
	int i,j;
	RECORD_t temp;
	
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(rec[j].rental_rate>rec[j+1].rental_rate)
			{
				temp=rec[j];
				rec[j]=rec[j+1];
				rec[j+1]=temp;
			}
		}
	}
	for(i=0;i<100;i++)
	{
	printf("ID: %d\n", rec[i].film_id);
	printf("TITLE: %s\n", rec[i].title);
	printf("DESCRIPTION: %s\n", rec[i].description);
	printf("RELEASE YEAR: %d\n", rec[i].release_year);
	printf("RENTAL DURATION: %d\n", rec[i].rental_duration);
	printf("RENTAL RATE: %f\n", rec[i].rental_rate);
	printf("REPLACEMENT COST: %f\n", rec[i].replacement_cost);
	printf("RATING: %s\n", rec[i].rating);
	printf("LAST UPDATE: %s\n", rec[i].last_update);
	}
}
int list(RECORD rec)
{
	int i;
	for(i=0;i<1000;i++)
	{
		printf("ID: %d\n", rec[i].film_id);
		printf("TITLE: %s\n", rec[i].title);
		printf("DESCRIPTION: %s\n", rec[i].description);
		printf("RELEASE YEAR: %d\n", rec[i].release_year);
		printf("RENTAL DURATION: %d\n", rec[i].rental_duration);
		printf("RENTAL RATE: %f\n", rec[i].rental_rate);
		printf("REPLACEMENT COST: %f\n", rec[i].replacement_cost);
		printf("RATING: %s\n", rec[i].rating);
		printf("LAST UPDATE: %s\n", rec[i].last_update);
	}
}

/* IMPLEMENT YOUR FUNCTIONS HERE */
/* IMPLEMENT YOUR FUNCTIONS HERE */
/* IMPLEMENT YOUR FUNCTIONS HERE */



