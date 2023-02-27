#include "main.h"
/**
 *create_array - crate an array. duh
 *@size: is the size
 *@c: is a letter
 *Return: Ill return whatever I want
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
