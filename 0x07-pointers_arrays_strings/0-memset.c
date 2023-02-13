#include "main.h"

/**
 *_memset - sets the memory from a certain target spot
 *@s: sssssssss (like a snake)
 *@b: bbbbbbbbb (like a b)
 *@n: nnnnnnnn (like a crashing plane)
 *Return: just a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count <= n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
