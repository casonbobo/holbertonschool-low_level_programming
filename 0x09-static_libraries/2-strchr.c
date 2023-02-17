#include "main.h"

/**
 *_strchr - straight characters are overrated
 *@s: ssssss (like a sausage)
 *@c: cccccc (like a cold)
 *Return: again why is this captilized??
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count]; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	return ('\0');
}
