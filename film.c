#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000                                        //Do not edit this macro.

typedef struct
{
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
	int i;

	RECORD rec = (RECORD)malloc(sizeof(RECORD_t)*MAX);  //Do not edit this line.
	FILE *file = fopen("data.txt", "rb");               //Do not edit this line.
	if (file == NULL) {                                 //Do not edit this line.
		printf("Cannot open the file.\n");              //Do not edit this line.
		exit(0);                                        //Do not edit this line.
	}                                                   //Do not edit this line.
	fread(rec, sizeof(RECORD_t)*MAX, 1, file);          //Do not edit this line.
	fclose(file);                                       //Do not edit this line.

	/**************************/
	/* Your code starts here. */
	/**************************/

	//The following is a hint to access the rec array in memory.

	//for(i=500;i>=0;i--)
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
	//...
	/**************************/
	/* Your code ends here.   */
	/**************************/
	
	file = fopen("data.txt", "wb");                     //Do not edit this line.
	fwrite(rec, sizeof(RECORD_t)*MAX, 1, file);         //Do not edit this line.
	fclose(file);                                       //Do not edit this line.
	free(rec);                                          //Do not edit this line.
	return 1;                                           //Do not edit this line.
}
int search(char str[], char word[])
{
    int l, i, j;

    /* finding length of word */
    for (l = 0; word[l] != '\0'; l++);

    for (i = 0, j = 0; str[i] != '\0' && word[j] != '\0'; i++)
    {
        if (str[i] == word[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    if (j == l)
    {
        /* substring found */
        return (i - j);
    }
    else
    {
        return  - 1;
    }
}
void Sort(int dizi[], int elemanSayisi)
{
    int temp;
    int i, j;
 
    for (i=1; i<elemanSayisi; i++)
    {
        for (j=0; j<elemanSayisi-i; j++)
        {
             if(dizi[j] > dizi[j+1])
            {
                temp = dizi [j];
                dizi [j] = dizi [j+1];
                dizi [j+1] = temp;
            }
        }
    }
}

/* IMPLEMENT YOUR FUNCTIONS HERE */
/* IMPLEMENT YOUR FUNCTIONS HERE */
/* IMPLEMENT YOUR FUNCTIONS HERE */

