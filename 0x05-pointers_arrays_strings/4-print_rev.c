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

	while (s[i])
	{
		i++;
	}

	for (; s[i]; i--)
	{
		putchar(s[i]);
	}
}
