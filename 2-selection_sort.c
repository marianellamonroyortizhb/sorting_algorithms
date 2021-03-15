#include "sort.h"
/**
 * selection_sort - selection algorthms
 * @size: size input
 * @array: pointer input
 * Return: No Return
 */
void selection_sort(int *array, size_t size)
{
	size_t count1, count2, temp;
	int temp2;

	temp = 0;

	for (count1 = 0; count1 < size - 1; count1++)
	{
		temp = count1;
		for (count2 =  count1 + 1; count2 < size; count2++)
		{
			if (array[count2] < array[temp])
				temp = count2;
		}
		if (count1 != temp)
		{
			temp2 = array[count1];
			array[count1] = array[temp];
			array[temp] = temp2;

			print_array(array, size);
		}
	}
}
