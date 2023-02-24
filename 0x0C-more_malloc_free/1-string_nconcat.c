#include "main.h"

/**
 *string_nconcat - concantenate Mr. string
 *@s1: stringyy
 *@s2:strungyy
 *@n: nice and neat
 * Return: my character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i1, i2, malc;
	char *o;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i1 = 0; s1[i1] != '\0'; i1++)
		s1[i1] = o[i1];
	i1++;
	for (i2 = 0; i2 != n || i2 != '\0'; i2++, i1++)
		s2[i2] = o[i1];
	for (malc = 0; malc < i1; malc++)
	{
		o = malloc(sizeof(char));
		if (o == NULL)
			return (NULL);
	}
	return (o);
}
