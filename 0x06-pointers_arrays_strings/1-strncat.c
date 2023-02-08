#include "holberton.h"
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
	int i = 0;
	int o = 0;
	int c = 0;
	int f = 0;

	while (dest[i] != 0)
	{
		i++;
		o++;
	}
	while (src[c] <= n)
	{
		if (src[c] == '\0')
			break;
		c++;
		o++;
	}
	while (i <= o)
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	if (src[n] <= src[c])
		return (dest);
	dest[i] = '\0';
	return (dest);
}
