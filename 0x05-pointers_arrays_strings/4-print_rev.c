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
int n;

	while (s[i] != '\0')
	{
		i++;
	}
	i = length;
	for (n = length - 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
putchar('\n');
}
