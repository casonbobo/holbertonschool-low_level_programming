#include "main.h"
/**
 *set_bit - set the bits to da bit thing
 *@n: wants to be a potato
 *@index: is a number but thinks its a cat
 *Return: is a return of a return of a return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
