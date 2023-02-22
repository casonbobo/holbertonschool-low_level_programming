#include "main.h"
/**
 *_strcmp - compare compare compare
 *@s1: s ooooone
 *@s2: s twoooooo
 *Return: math i guess
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
