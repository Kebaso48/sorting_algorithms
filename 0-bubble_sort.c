#include "sort.h"

/**
 * int_swap - saps integers in a array
 * @a: first int
 * @b: second int
 */
void int_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: the size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int_swap(array + i, array + i + 1);
				print_array(array, size);
				bub = false;
			}
		}
		len--;
	}
}
