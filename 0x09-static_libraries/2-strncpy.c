#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - the straight copy
 *@dest: is destination
 *@src: is something else
 *@n: is a number
 *Return: peepee poopoo
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int srclen = 0;

	while (src[index])
	{
		index++;
		srclen++;
	}

	for (index = 0; src[index] && index < n ; index++)
	{
		dest[index] = src[index];
	}

	for (index = srclen; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
