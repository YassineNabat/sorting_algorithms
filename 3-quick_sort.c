#include "sort.h"

void swap_ints(int *a, int *b) {
	
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void insertion_sort(int *array, size_t size) {
	 
	int i, key, j;
	for (i = 1; i < size; i++) {
		key = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}
	array[j + 1] = key;
	}
}

void quick_sort(int *array, size_t size) {

	if (array == NULL || size < 2)
		return;
		
	insertion_sort(array, size);
}

