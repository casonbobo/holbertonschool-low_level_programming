#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - a search involving numbers
*
* @array: the array
* @size: the size of the array
* @value: the value we are looking for
*
* Return: the outcome of the search
*/

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	
	while (l <= r)
	{
		printf("Searching in array: ");

		int i = 0;
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		
		printf("%d", array[i]);
		printf("\n");
		int mid = l + (r - 1) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
