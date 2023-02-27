#include "main.h"
/**
 *str_concat - cats
 *@s1: is a good sibling to s2
 *@s2: s1's twin
 *Return: point somewhere else
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n = 0, m = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	m = i + j;
	s = malloc((sizeof(char) * m) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	while (n < m)
	{
		if (n <= i)
			s[n] = s1[n];

		if (n >= i)
		{
			s[n] = s2[j];
			j++;
		}

		n++;
	}

	s[n] = '\0';
	return (s);
}
