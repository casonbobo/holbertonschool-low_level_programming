#include "main.h"
/**
 *array_range - the range of the array
 *@min: the min
 *@max: the max
 *Return: this time number
 */

int *array_range(int min, int max)
{
	int *a, i, len;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min));

	if (a == NULL)
		return (NULL);
	len = max - min + 1;

	for (i = 0; i <= len; i++)
		a[i] = min + i;
	
	return (a);
}
