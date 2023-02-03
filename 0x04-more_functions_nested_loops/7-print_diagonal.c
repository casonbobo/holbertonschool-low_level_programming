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
	for (; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar(line);
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
