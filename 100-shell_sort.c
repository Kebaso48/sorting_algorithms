#include "sort.h"

/**
 * int_swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void int_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort - sorts array of integers using shell sort
 * @array: the array of integers
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				int_swap(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
