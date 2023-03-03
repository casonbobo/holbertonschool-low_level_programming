#include "function_pointers.h"
/**
 *array_iterator - count Mr. Array over here
 *@array: you're supposed to be in here
 *@size: no no  you're not that big
 *@action: ready? set.
 *Return: nothing I don't think
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
