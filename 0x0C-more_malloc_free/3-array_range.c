#include "main.h"
/**
 *array_range - the range of the array
 *@min: the min
 *@max: the max
 *Return: this time number
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

		for (i = 0; min <= max; i++, min++)
			a[i] = min;
	return (a);
}
