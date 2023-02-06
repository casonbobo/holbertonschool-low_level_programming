#include "main.h"
#include <stdio.h>
/**
 *print_rev - reverse reverse
 *@s: is a potato secretly
 *Return: Probably something dumb
 */

void print_rev(char *s)
{
int i = 0;
int length = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = length;
	for (length -= 1; length >= 0; length--)
	{
		putchar(s[length]);
	}
putchar('\n');
}
