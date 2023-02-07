#include "main.h"
/**
 *rev_string - yuuuuu
 *@s: a letter i guess
 *Return: something dumb
 */

void rev_string(char *s)
{
	int len;
	char ch;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len -= 1;
	for (; len >= 0; len--)
	{
		s[len] = ch;
	}
}
