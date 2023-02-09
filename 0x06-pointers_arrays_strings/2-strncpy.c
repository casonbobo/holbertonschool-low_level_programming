#include "holberton.h"
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

	for (; src[index] != '\0' && index < n ; index++)
	{
		dest[index] = src[index];
	}
	if (n < index)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
