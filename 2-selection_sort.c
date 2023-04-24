#include "sort.h"

/**
 * swap_int - swaps two integers
 * @a: fist integers
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts n array of integers in ascending order
 * @array: the array of integers
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *smal;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		smal = array + i;
		for (j = i + 1; j < size; j++)
			smal = (array[j] < *smal) ? (array + j)	: smal;

		if ((array + i) != smal)
		{
			swap_int(array + i, smal);
			print_array(array, size);
		}
	}
}
