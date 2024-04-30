#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the bubble sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	
	if (size < 2)
		return;
		
	for (i = 0; i < size - 1; i++)
	{
		bool swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp ;
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}
