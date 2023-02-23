#include "main.h"
/**
 *malloc_checked - checkout Mr. Malloc himself
 *@b: this poor b is only allowed to be positive
 *Return: return back to the void demon
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
	{
		free(alloc);
		exit(98);
	}
	return (alloc);
}
