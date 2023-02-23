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
	int i1, i2;
	char *o[];

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
		if (s1[i1] == NULL)
			break;
		s1[i1] = o[i1];
	}
	i1++;
	for (i2 = 0; s2 != n || '\0'; i2++)
	{
		if (s2[i2] == NULL)
			break;
		s2[i2] = o[i1];
	}
	return (o);
}
