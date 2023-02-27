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

	unsigned int s1Len = 0, s2Len = 0, bufferLen, index = 0;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1Len])
		s1Len++;
	while (s2[s2Len])
		s2Len++;
	if (s2Len > n)
		s2Len = n;

	bufferLen = s1Len + s2Len;

	pointer = malloc(sizeof(char) * (bufferLen + 1));
	if (pointer == NULL)

		return (NULL);
	s1Len = 0;
	for (index = 0; s1[index]; index++)
	{
		pointer[s1Len] = s1[index];
		s1Len++;
	}
	for (index = 0; s2[index] && index < bufferLen; index++)
	{
		pointer[s1Len] = s2[index];
		s1Len++;
		s2Len++;
	}
	pointer[s1Len] = '\0';
	return (pointer);
}
