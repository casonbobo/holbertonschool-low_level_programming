#include "main.h"
/**
 *clear_bit - is that clear sr
 *@n:night night
 *@index: intent intent
 *Return:Thanks SARAH
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
