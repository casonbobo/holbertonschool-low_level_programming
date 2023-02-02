/**
*print_line - draw
*@n: an incrementor
*Return: nuthin
*/

#include "main.h"

void print_line(int n)
{
char line = '_';
int i;

	for (i = 0; i == n; i++)
	{
		_putchar(line);
	}
_putchar('\n');
}
