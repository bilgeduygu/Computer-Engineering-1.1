#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<time.h>

int main(){
    int number;
    srand(time(NULL));
    number=rand()%11;
    printf("Random number = %d",number);
    getch();
}
