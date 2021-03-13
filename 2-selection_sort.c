#include "sort.h"

/**
 * selection_sort - selection algorthms
 * @size: size input
 * @array: pointer input
 * Return: No Return
 */
void selection_sort(int *array, size_t size)
{
	size_t count1;
	size_t count2;
	size_t min;
	size_t temp;

	for (count1 = 0; count1 < size - 1; count1++)
	{
		min = count1;

		for (count2 = count1 + 1; j < size; count2++)
		{
			if (array[count2] < array[min])
				min = count2;
		}
		if (min != count2)
		{
			temp = array[min];
			array[min] = array[count1];
			array[count1] = temp;
			print_array(array, size);
		}
	}
}
