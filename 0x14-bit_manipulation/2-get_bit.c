#include "main.h"
/**
 *get_bit - get bits bro
 *@n: is a number
 *@index: index index index
 *Return: something or nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
