#include "main.h"

/**
 *string_nconcat - concantenate Mr. string
 *@s1: stringyy
 *@s2:strungyy
 *@n: nice and neat
 *Return: my character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[index])
		index++;
	while (s2[len++])
		index++;

	concat = malloc(sizeof(char) * (index + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[index])
	{
		s1[index] = concat[index];
		index++;
	}
	while (s2[len])
	{
		s2[len] = concat[index];
		index++;
	}
	concat[index] = '\0';
	return (concat);
}
