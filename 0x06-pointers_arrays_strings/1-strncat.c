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
	int destlen = 0;
	int index = 0;
	int srclen = 0;
	int index2 = 0;

	while (dest[destlen] != 0)
	{
		destlen++;
		index++;
	}
	while (src[srclen] != 0)
	{
		if (src[srclen] == '\0')
			break;
		srclen++;
		index++;
	}
	while (srclen <= index)
	{
		dest[destlen] = src[index2];
		srclen++;
		index2++;
	}
	if (src[n] >= src[srclen])
		dest[index2] = '\0';
	return (dest);
}
