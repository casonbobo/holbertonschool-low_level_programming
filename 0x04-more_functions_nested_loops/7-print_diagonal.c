/**
*print_diagonal - draw
*@n: an incrementor
*Return: nuthin
*/

#include "main.h"

void print_diagonal(int n)
{
char line = '\\';
int i = 0;
int c;
if (n > 0)
{
	while (i < n)
	{
		_putchar(line);
		for (c = 0; c < n; c++)
		{
		_putchar(' ');
		}
		i++;
		c = 0;
		_putchar('\n');
	}
}
_putchar('\n');
}
