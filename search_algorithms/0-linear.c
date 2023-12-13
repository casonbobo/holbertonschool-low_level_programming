#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - a search algorithm involving lines
*
* @array: the array given to us
* @size: the size of the array
* @value: the value we're looking for
*
* Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
