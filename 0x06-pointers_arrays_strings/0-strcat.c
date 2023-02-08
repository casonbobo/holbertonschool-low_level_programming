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
	int i;
	int destlen = 0;
	while (dest[i] != 0)
	{
		destlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
