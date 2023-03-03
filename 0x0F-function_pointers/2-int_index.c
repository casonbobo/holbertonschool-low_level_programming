#include "function_pointers.h"

/**
 *int_index - an array of numbers
 *@array: a list of numbers
 *@size: does not matter
 *@cmp:don't compare yourself
 *Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && array)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return [i];
	}
	return (-1);
}
