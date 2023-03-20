#include "main.h"
/**
 *flip_bits - doing back flips
 *@n: is a letter
 *@m: is a number
 *Return: this is my last
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
