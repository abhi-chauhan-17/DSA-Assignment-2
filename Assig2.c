#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define MIN_NUM_ASCII 48
#define MAX_NUM_ASCII 57

#define MIN_ALPHA_ASCII 65
#define MAX_ALPHA_ASCII 70

int main(){
    char str[11];
    bool toss;

    srand(time(NULL));
 	int length = rand() % 8 + 3;
    
    printf("The Randomly Generated Character is: ");
	
	int i;
    for (i=0;i<length;i++)
    {
	toss = rand() % 2;
	if(toss==true)
        str[i] = rand() % ((MAX_ALPHA_ASCII - MIN_ALPHA_ASCII) + 1) + MIN_ALPHA_ASCII;
    else
        str[i] = rand() % ((MAX_NUM_ASCII - MIN_NUM_ASCII) + 1) + MIN_NUM_ASCII;
	
	
    printf("%c", str[i]);
	}
}
