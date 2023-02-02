/**
*print_line - draw
*@n: an incrementor
*Return: nuthin
*/

#include "main.h"

void print_line(int n)
{
char line = '_';
int i = 0;
if (n > 0)
{
	while (i < n)
	{
		_putchar(line);
		i++;
	}
}
_putchar('\n');
}
