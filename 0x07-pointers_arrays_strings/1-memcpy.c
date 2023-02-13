#include "main.h"

/**
 *_memcpy - copys memory
 *@dest: does the destination matter
 *@src: or where we come fro
 *@n: something unnamed
 *Return: characters of time
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
