
#include "sort.h"
/**
 * bubble_sort - Bubble Sort
 * @array: Array
 * @size: Size of array
 * Return: Array print
 */
void bubble_sort(int *array, size_t size)
{
	size_t counter1;
	size_t counter2;
	size_t counter_tmp = 0;

	if (size  < 2)
		return;

	for (counter1 = 0; counter1 < size - 1; counter1++)
	{
		for (counter2 = 0; counter2 < size - counter2 - 1; counter2++)
		{
			if (array[counter2] > array[counter2 + 1])
			{
				counter_tmp = array[counter2];
				array[counter2] = array[counter2 + 1];
				array[counter2 + 1] = counter_tmp;
				print_array(array, size);
			}
		}
	}
}
