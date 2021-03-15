
#include "sort.h"

/**
 * bubble_sort - Bubble Sort
 * @array: Array
 * @size: Size of array
 * Return: Without return
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int counter1;
	unsigned int counter2;
	int counter_tmp;


	if (size < 2)
		return;

	if (!array)
		return;

	while (counter1 < size - 1)
	{
		counter2 = 0;

		while (counter2 < size - 1)
		{
			if (array[counter2] > array[counter2 + 1])
			{
				counter_tmp = array[counter2];
				array[counter2] = array[counter2 + 1];
				array[counter2 + 1] = counter_tmp;
				print_array(array, size);
			}
			counter2++;
		}
		counter1++;
	}
}
