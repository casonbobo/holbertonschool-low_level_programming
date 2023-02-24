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
	unsigned int index1, index2;
	char *o;

	for (index1 = 0; s1[index1]; index1++)
	{
		o = malloc(sizeof(char));
		if (o == NULL)
			return (NULL);
	}
	for (index1 = 0; s1[index1]; index1++)
		o[index1] = s1[index1];
	for (index2 = 0; s2[index2] && index2 <= n; index2++, index1++)
		o[index1] = s2[index2];

	return (o);
}
