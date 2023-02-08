#include "holberton.h"
#include <string.h>
/**
 *_strcat - the straight cat
 *@dest: is destination
 *@src: is something else
 *Return: peepee poopoo
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;
	int c = 0;
	int f = 0;

	while (dest[i] != 0)
	{
		i++;
		n++;
	}
	while (src[c] != 0)
	{
		c++;
		n++;
	}
	while (i <= n)
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}
