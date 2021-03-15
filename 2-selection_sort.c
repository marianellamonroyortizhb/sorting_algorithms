#include "sort.h"
/**
 * selection_sort - selection algorthms
 * @size: size input
 * @array: pointer input
 * Return: No Return
 */
void selection_sort(int *array, size_t size)
{
	unsigned int count1 = 0, count2, count3;
	int temp;

	if (size < 2)
		return;
	while (count1 < size)
	{
		count3 = count1;
		temp = array[count1];
		count2 = count1 + 1;
		while (count2 < size)
		{
			if (array[count2] < temp)
				temp = array[count2];
				count3 = count2;
			count2++;
		}
		if (count3 != count1)
		{
			array[count3] = array[count1];
			array[count1] = temp;
			print_array(array, size);
		}
		count1++;
	}
}
