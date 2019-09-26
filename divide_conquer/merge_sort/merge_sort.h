#ifndef MERGE_SORT_H
#define MERGE_SORT_H


#define MAX_SIZE 100
#define MIN_SIZE 1

int * merge_sort(int * src, int * size);
int * merge_arrays(int * src1, int * size1, int * src2, int * size2); /* merge 2 arrays to create new one */
int * generate_values_array(int * size);	/* generate random values for array */
void get_array_size(int * size);
void print_array(int * src, int * size);


#endif
