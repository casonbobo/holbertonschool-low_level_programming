#include "main.h"

/**
 *_strpbrk -  stop the barking
 *@s: ssssss (like a squirrel?)
 *@accept: please accept this apology
 *Return: Returns a chaarrrrrr
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
			return (s + i);
			}
		}
	}
return (0);
}
