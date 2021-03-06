#include <stdio.h>
#include <stdlib.h>




#define LOOPTIME 5
#define ARRAYLEN 25
#define RNG_SEED 3074


void InitializeArray(double *numArray, const int length); 
int InsertionSort(double *numArray, const int length); 


void main(void)
{
	int i;
	int j;
	int counter;
	double numArray[ARRAYLEN];
	srand(RNG_SEED);

	for(i=0; i<LOOPTIME; i++)
	{
		InitializeArray(numArray, ARRAYLEN);
		counter=InsertionSort(numArray, ARRAYLEN);


		printf("\nThis is the SORTED list: \n");
		for(j=0; j<ARRAYLEN; j++)
		{
			printf("%.2f\n ", numArray[j]);
		}
		printf("\nThe number of swaps for this list was: %d,\n", counter);
	}
}

void InitializeArray(double *numArray, const int length)
{
	int j;
	printf("\nThis is the original UNSORTED list: \n");
	for(j=0; j<ARRAYLEN; j++)
	{
		numArray[j] = rand()/(RAND_MAX/1000.0);
		printf("%.4f\n ", numArray[j]);
	}
}

int InsertionSort(double *numArray, const int length)
{
	int i, j;
	double key;
	int counter =0;  
	for(j=1 ; j<=ARRAYLEN-1; j++) 
	{
		i= j;
		while(i>0 && numArray[i]<numArray[i-1])
		{
			key=numArray[i];
			numArray[i]= numArray[i-1];
			numArray[i-1]=key;
			i--;
			counter++;
		}
	}
	return counter;
}

