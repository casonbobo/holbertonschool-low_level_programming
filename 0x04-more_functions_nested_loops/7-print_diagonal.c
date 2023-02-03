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
int c = 0;

if (n > 0)
{
	while (i < n)
	{
		_putchar(line);
		while (c <= i)
		{
			_putchar(' ');
			c++;
		}
		i++;
		c = 0;
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
