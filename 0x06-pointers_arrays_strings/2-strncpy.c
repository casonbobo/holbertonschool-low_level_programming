#include "holberton.h"
#include <string.h>
/**
 *_strncpy - the straight copy
 *@dest: is destination
 *@src: is something else
 *@n: is a number
 *Return: peepee poopoo
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (index = 0; src[index] && index < n; index++)
		dest[index++] = src[index];
	_putchar('\0');
	return (dest);
}
