#include <stdio.h>
#include "merge_sort.h"

int main(void) {

	int array_size1, array_size2;
	int * array_1 = NULL;
	int * array_2 = NULL; 
	int * merged_array = NULL; 
	int array_size3;

	printf("First Array\n"); 
	get_array_size(&array_size1);
	/* printf("First Array size: %d \n", array_size1); */

	printf("Second Array\n"); 
	get_array_size(&array_size2);
	/* printf("First Array size: %d \n", array_size2); */

	array_1 = generate_values_array(&array_size1);
	array_2 = generate_values_array(&array_size2);

	printf("First Array\n");
	print_array(array_1, &array_size1);	


	printf("Second Array\n");
	print_array(array_2, &array_size2);

	merged_array=merge_arrays(array_1, &array_size1, array_2, &array_size2);
	array_size3 = array_size1 + array_size2;	

	printf("Merged Array\n");
	print_array(merged_array, &array_size3);

	return 0;


}
