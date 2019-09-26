#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "merge_sort.h"

int * merge_sort(int * src, int * size) {



}


void get_array_size(int * size)
{
	int in_size;

	printf("Enter array size: ");
	scanf("%d", &in_size);
	
	while ( (in_size > MAX_SIZE) || (in_size < MIN_SIZE))
	{
		printf("Incorrect size. Size must be greater than %d  and %d. \n", MIN_SIZE, MAX_SIZE);
		scanf("%d", &in_size);
	}

	*size = in_size;
}


int * generate_values_array(int * size) {

	int i;
	

	int * src = (int *) malloc ( (*size) * sizeof(int));

	for (i = 0 ; i < *size; i++)	{
		src[i] = rand()%10 + 1;
	}	

//	print_array(src, size);

	return src;

}

void print_array(int * src, int * size) {

	int i;

	for (i = 0 ; i < *size; i++)	{
		printf("%3d ",src[i] );
	}	
	printf("\n");

}

int * merge_arrays(int * src1, int * size1, int * src2, int * size2) { 
/* merge 2 arrays to create new one */

	int size = *size1 + *size2;
	int * tgt = (int *) malloc( size * sizeof(int)); /* create new array that will contain both arrays */

	bool done = false;
	int i,j,k, counter;
	
	i=j=k=0;

	while (!done) {
		
		if (src1[i] < src2[j]) {
			tgt[k]=src1[i];
			++i; ++k; 
		} else {
			tgt[k]=src2[j];
			++j; ++k;
		}

		if ( (i == *size1) || (j == *size2)) {
			/* atleast one array has been copied over */
			done = true;
		}
	}

	/* copy remaining data from arrays */	

	if ( i < *size1 ) {
		for(counter = i; counter < *size1; counter++)  {
			tgt[k] = src1[counter];
			++k;
		}	
	}
	
	if ( j < *size2 ) {
		for(counter = j; counter < *size2; counter++)  {
			tgt[k] = src2[counter];
			++k;
		}	
	}	
	return tgt;
}
