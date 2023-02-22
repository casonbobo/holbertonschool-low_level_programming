#include "main.h"
#include <string.h>
/**
 *_strncat - the straight cat
 *@dest: is destination
 *@src: is something else
 *@n: is a number
 *Return: peepee poopoo
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int index;

	while (dest[index++])
		destlen++;
	for (index = 0; src[index] && index < n; index++)
		dest[destlen++] = src[index];
	return (dest);
}
